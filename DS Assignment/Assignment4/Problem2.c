 #include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;


Node *createNode(int data){
    Node *newNode= (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = newNode;
    newNode->next = newNode;
}

void display(Node *start){
    if (start!=NULL){
        Node *temp=start;
        while (temp->next != start){
            printf("%d -> ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);

    }
}

Node *insert_at_start(Node *start, int data){
    Node *newNode=createNode(data);
    if (start == NULL){
        newNode->next=newNode;
        newNode->prev=newNode;
        start=newNode;
    }
    else{
        newNode->prev=start->prev;
        newNode->next=start;
        start->prev->next=newNode;
        start->prev=newNode;
        start=newNode;
    }
    return start;
}

Node *insert_at_end(Node *start, int data){
    if (start == NULL)
        start=insert_at_start(start, data);
    else{
        Node *newNode=createNode(data);
        newNode->prev=start->prev;
        newNode->next=start;
        start->prev->next=newNode;
        start->prev=newNode;
    }
    return start;
}

Node *delete_from_start(Node *start){
    if (start!=NULL){
        if (start->next==start){
            Node *temp=start;
            start=NULL;
            free(temp);
        }
        else{
            Node *temp=start;
            start->prev->next=start->next;
            start->next->prev=start->prev;
            start=start->next;
            free(temp);
        }
    }
    return start;
}

Node *delete_from_end(Node *start){
    if (start != NULL){
        if (start->next==start){
            start=delete_from_start(start);
        }
        else{
            Node *temp = start->prev;
            start->prev=temp->prev;
            temp->prev->next=start;
            free(temp);
        }
    }
    return start;
}

Node *search(Node *start, int item){
    Node *temp = start;
    while (temp->next != start){
        if (item == temp->data)
            return temp;
        temp = temp->next;
    }
    if (item == temp->data)
        return temp;
    return NULL;
}

Node *delete_after(Node *start, int item){
    if (start != NULL){
        Node *item_node=search(start,item);
        if (item_node != NULL){
            if (item_node->next==start)
                start=delete_from_start(start);
            else if(item_node->next==start->prev)
                start=delete_from_end(start);
            else{
                Node *temp=item_node->next;
                item_node->next=temp->next;
                temp->next->prev=item_node;
                free(temp);
            }
        }

    }
    return start;
}

void delete_list(Node *start){
    if (start!=NULL){
        Node *temp=start;
        while(temp->next != start){
            Node *cur=temp;
            temp=temp->next;
            free(cur);
        }
        free(temp);
    }
}

int main(){

    struct Node *head = NULL;
    int choice, value, target;

    printf("\nMenu:\n");
    printf("1. Create a single linked list\n");
    printf("2. Display the elements of the linked list\n");
    printf("3. Insert a node at the beginning\n");
    printf("4. Insert a node at the end\n");
    printf("5. Delete a node from the beginning\n");
    printf("6. Delete a node from the end\n");
    printf("7. Delete a node after a given node\n");
    printf("8. Delete the entire linked list\n");
    printf("0. Exit\n");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to create the list: ");
            scanf("%d", &value);
            head = createNode(value);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter the value to insert at the beginning: ");
            scanf("%d", &value);
            head = insert_at_start(head, value);
            break;
        case 4:
            printf("Enter the value to insert at the end: ");
            scanf("%d", &value);
            head = insert_at_end(head, value);
            break;
        case 5:
            head = delete_from_start(head);
            break;
        case 6:
            head = delete_from_end(head);
            break;
        case 7:
            printf("Enter the target value after which to delete: ");
            scanf("%d", &target);
            head = delete_after(head, target);
            break;
        case 8:
            delete_list(head);
            head = NULL;
            printf("Linked list deleted.\n");
            break;
        case 0:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 0);

    // Free the dynamically allocated memory before exiting
    delete_list(head);

    return 0;
}
