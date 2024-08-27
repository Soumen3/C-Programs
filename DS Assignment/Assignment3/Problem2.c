#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;


Node *createNode(int value){
    Node *newNode=(Node*)malloc(sizeof(Node));
    if(newNode!=NULL){
        newNode->data=value;
        newNode->next=newNode;
        return newNode;
    }
    else
        printf("Memory allocation failed!");

}

void display(Node *head){
    Node *temp=head;
    if (head ==NULL)
        printf("\nThe list is empty");
    else{
        printf("\nThe list is :\n");
        do{
            printf("%d -> ",temp->data);
            temp=temp->next;
        }while(temp!=head);
    }
}

Node *insertAtBeginning(Node *head, int value){
    if (head==NULL){
        head=createNode(value);
        return head;
    }
    else{
        Node *newNode = (Node *)malloc (sizeof(Node));
        newNode->data=value;
        Node *temp=head;

        while(temp->next!=head)
            temp=temp->next;

        temp->next=newNode;
        newNode->next=head;
        head=newNode;

        return head;
    }
}

Node *insertAtEnd(Node *head, int value){
    if (head ==NULL){
        head=createNode(value);
        return head;
    }
    else{
        Node *newNode=(Node *)malloc(sizeof(Node));
        newNode->data=value;
        Node *temp=head;

        while(temp->next!=head)
            temp=temp->next;

        temp->next=newNode;
        newNode->next=head;

        return head;

    }
}

Node *deleteFromBeginning(Node *head){
     Node *temp;

    if (head == NULL) {
        printf("Circular Linked List is empty. Nothing to delete.\n");
        return head;
    }
    else if(head->next==head){
        temp=head;
        head= NULL;
        free(temp);
        printf("First node is deleted");
        return head;
    }

    temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = head->next;
    free(head);
    head = temp->next;
    printf("First node is deleted");
    return head;
}

int main(){
    Node *head=NULL;
//    Node *last=NULL;
    int choice, value;


    do {
        printf("\nMenu:\n");
        printf("1. Create a circular linked list\n");
        printf("2. Display the elements of the linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Delete a node from the beginning\n");
        printf("6. Delete a node from the end\n");
        printf("7. Delete a node after a given node\n");
        printf("8. Delete the entire linked list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            printf("Enter the value of the new linked list: ");
            scanf("%d",&value);
            head=createNode(value);
            if (head!=NULL)
                printf("The linked list is created.");
            else
                printf("Linked list creation filed!");
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("\nEnter the value : ");
            scanf("%d",&value);
            head=insertAtBeginning(head, value);
            printf("The node is added in the beginning.");
            break;
        case 4:
            printf("\nEnter the value : ");
            scanf("%d",&value);
            head=insertAtEnd(head, value);
            printf("The node is added at the end.");
            break;
        case 5:
            head=deleteFromBeginning(head);
            break;
        case 0:
            printf("Program exit.");
            exit(0);
        default:
            printf("\nEnter a valid choice.");

        }


    }while(choice!=0);
}
