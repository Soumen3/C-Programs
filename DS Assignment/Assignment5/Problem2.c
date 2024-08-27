#include<stdio.h>
#include<stdlib.h>
#define Max_size 10
typedef struct Node{
    int item;
    struct Node *next;
}Node;

typedef struct Queue{
    Node *front, *rear;
}Queue;

Queue *createQueue(){
    Queue *queue=(Queue*)malloc(sizeof(Queue));
    queue->front=NULL;
    queue->rear=NULL;
    return queue;
}

Node *createNode(int data){
    Node *node =(Node*)malloc(sizeof(Node));
    node->item=data;
    node->next=NULL;
    return node;
}
int isEmpty(Queue *queue){
    return queue->front==NULL;
}

void Enqueue(Queue *queue, int data){
    Node *node=createNode(data);
    if (isEmpty(queue)){
        queue->front=node;
        queue->rear=node;
    }
    else{
        queue->rear->next=node;
        queue->rear=node;
    }
}

void Dequeue(Queue *queue){
    if (isEmpty(queue))
        printf("\nThe queue is already empty!");
    else if(queue->front==queue->rear){
        Node *temp=queue->front;
        queue->front=NULL;
        queue->rear=NULL;
        printf("\n%d is dequeued from the queue",temp->item);
        free(temp);
    }
    else{
        Node *temp=queue->front;
        queue->front=queue->front->next;
        printf("\n%d is dequeued from the queue",temp->item);
        free(temp);
    }

}

Node *Peek(Queue *queue){
    if(!isEmpty(queue)){
        return queue->front;
    }
    return NULL;

}

void Display(Queue *queue){
    if (!isEmpty(queue)){
        printf("\nThe elements are:\n");
        Node *temp=queue->front;
        while(temp!=queue->rear && temp!=NULL){
            printf("%d ",temp->item);
            temp=temp->next;
        }
        printf("%d ",temp->item);
    }
    else{
        printf("\nThe queue is already empty");
    }
}


int main(){
    Queue *queue=createQueue();


    printf("1. For Enqueue.");
    printf("\n2. For Dequeue.");
    printf("\n3. For Peek.");
    printf("\n4. For Displaly.");
    printf("\n0. For Quit.");

    int choice, data;
    Node *temp;

    do{
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("\nEnter the data:  ");
            scanf("%d",&data);
            Enqueue(queue, data);
            break;
        case 2:
            Dequeue(queue);
            break;
        case 3:
            temp=Peek(queue);
            if(temp==NULL)
                printf("\nQueue is empty");
            else
                printf("\nThe front element is: %d",temp->item);
            break;
        case 4:
            Display(queue);
            break;
        default:
            printf("\nInvalid choice! Enter valid Choice.");
        }
    }while(choice!=0);

    return 0;
}



