#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    int prio;
    struct Node *next;
} Node;
Node *front = NULL, *rear = NULL;
int size = 10;

void Enqueue()
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    int element, prio;
    printf("\nEnter the value: ");
    scanf("%d", &element);
    printf("Enter the priority: ");
    scanf("%d", &prio);

    newNode->prio = prio;
    newNode->data = element;
    newNode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        Node *temp = front, *pre;
        while (temp->next != NULL)
        {
            if (temp->prio > newNode->prio)
                break;
            pre = temp;
            temp = temp->next;
        }

        if (temp == front)
        {
            newNode->next = temp;
            front = newNode;
        }
        else if (temp->next == NULL)
        {
            if (temp->prio > newNode->prio)
            {
                pre->next = newNode;
                newNode->next = temp;
            }
            else
                temp->next = rear = newNode;
        }
        else
        {
            pre->next = newNode;
            newNode->next = temp;
        }
    }

    printf("Enqueue performed.\n");
}

int Dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return -1;
    }
    Node *temp = front;
    int data = temp->data;

    if (front == rear)
        front = rear = NULL;
    else
        front = front->next;
    free(temp);
    return data;
}

void print()
{
    if (front == NULL)
        printf("Queue is empty!\n");
    else
    {
        printf("\nThe queue is:\n");
        Node *target = front;
        while (target != NULL)
        {
            printf("%d   %d\n", target->data, target->prio);
            target = target->next;
        }
    }
}

void main()
{

    printf("Priority Queue Operations\n\n");
    int choice;
    printf("1 for Insert node.");
    printf("\n2 for Delete node.");
    printf("\n3 for Print queue.");
    printf("\n4 for Exit.\n");

    while (1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            printf("%d is deleted.\n", Dequeue());
            break;
        case 3:
            print();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid option.\n");
        }
    }
}
