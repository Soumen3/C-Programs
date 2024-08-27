#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode != NULL)
    {
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }
    else
    {
        printf("\nMemory allocation failed!");
    }
}

void display(Node *start)
{
    Node *temp = start;
    if (temp != NULL)
    {
        printf("The elements are:\n");
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}
Node *insert_at_start(Node *start, int data)
{
    Node *newNode = createNode(data);
    if (start == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        start = newNode;
    }
    else
    {
        newNode->next = start;
        start = newNode;
    }
    return start;
}

Node *insert_at_last(Node *start, int data)
{
    if (start == NULL)
    {
        start = insert_at_start(start, data);
    }
    else
    {
        Node *newNode = createNode(data);
        Node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }
    return start;
}

Node *search(Node *start, int item)
{
    Node *temp = start;
    while (temp != NULL)
    {
        if (item == temp->data)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

Node *insert_after(Node *start, int item, int data)
{
    Node *item_node = search(start, item);
    if (item_node != NULL)
    {
        Node *newNode = createNode(data);
        if (item_node->next == NULL)
            start = insert_at_last(start, data);
        else
        {
            newNode->prev = item_node;
            newNode->next = item_node->next;
            item_node->next->prev = newNode;
            item_node->next = newNode;
        }
    }
    return start;
}

Node *insert_before(Node *start, int item, int data)
{
    Node *item_node = search(start, item);
    if (item_node != NULL)
    {
        Node *newNode = createNode(data);
        if (item_node->prev == NULL)
            start = insert_at_start(start, data);
        else
        {
            newNode->prev = item_node->prev;
            newNode->next = item_node;
            item_node->prev->next = newNode;
            item_node->prev = newNode;
        }
    }
    return start;
}

Node *delete_from_start(Node *start)
{
    if (start != NULL)
    {
        Node *temp = start;
        start = start->next;
        free(temp);
    }
    return start;
}

Node *delete_from_end(Node *start)
{
    if (start != NULL)
    {
        if (start->next == NULL)
            start = delete_from_start(start);
        else
        {
            Node *current = start;
            while (current->next != NULL)
                current = current->next;
            current->prev->next = NULL;
            free(current);
        }
    }
    return start;
}

Node *delete_after(Node *start, int item)
{
    Node *item_node = search(start, item);
    if (item_node != NULL )
    {
        if (item_node->next != NULL){
            Node *delete_element = item_node->next;
            if (item_node->next->next==NULL){
                item_node->next=NULL;
                free(delete_element);
            }
            else{
                item_node->next = delete_element->next;
                delete_element->next->prev = item_node;
                free(delete_element);
                    
            }
        }
        
    }
    return start;
}

void delete_list(Node *start)
{
    Node *temp = start;
    while (temp != NULL)
    {
        Node *current = temp;
        temp = temp->next;
        free(current);
    }
}
int main()
{

    struct Node *head = NULL;
    int choice, value, target;

    printf("\nMenu:\n");
    printf("1. Create a single linked list\n");
    printf("2. Display the elements of the linked list\n");
    printf("3. Insert a node at the beginning\n");
    printf("4. Insert a node at the end\n");
    printf("5. Insert a node before a given node\n");
    printf("6. Insert a node after a given node\n");
    printf("7. Delete a node from the beginning\n");
    printf("8. Delete a node from the end\n");
    printf("9. Delete a node after a given node\n");
    printf("10. Delete the entire linked list\n");
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
            head = insert_at_last(head, value);
            break;
        case 5:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            printf("Enter the target value before which to insert: ");
            scanf("%d", &target);
            head = insert_before(head, value, target);
            break;
        case 6:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            printf("Enter the target value after which to insert: ");
            scanf("%d", &target);
            head = insert_after(head, target, value);
            break;
        case 7:
            head = delete_from_start(head);
            break;
        case 8:
            head = delete_from_end(head);
            break;
        case 9:
            printf("Enter the target value after which to delete: ");
            scanf("%d", &target);
            head = delete_after(head, target);
            break;
        case 10:
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
