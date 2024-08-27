#include<stdio.h>
#include<stdlib.h>
#define Max_size 10

typedef struct Queue{
    int items[Max_size];
    int front, rear;
}Queue;

int isEmpty(Queue *queue){
    return queue->front==-1 && queue->rear==-1;
}
int isFull(Queue *queue){
    return (queue->rear+1)% Max_size == queue->front;
}

void Enqueue(Queue *queue, int data){
    if (isFull(queue))
        printf("\nThe queue is full!");
    else{
        if (isEmpty(queue)){
            queue->front++;
            queue->rear++;
        }
        else{
            queue->rear=(queue->rear+1)%Max_size;
        }
        queue->items[queue->rear]=data;
        printf("\n%d is inserted in the queue.",data);
    }
}

void Dequeue(Queue *queue){
    if (isEmpty(queue))
        printf("\nThe queue is already empty");
    else{
        int temp=queue->items[queue->front];
        if (queue->front==queue->rear){
            queue->front=-1;
            queue->rear=-1;
        }
        else
            queue->front=(queue->front+1)%10;
        printf("\n%d is dequeued from the queue.",temp);

    }
}

void Peek(Queue *queue){
    if(!isEmpty(queue)){
        printf("\nThe front Element is %d",queue->items[queue->front]);
    }
    else
        printf("\nThe Queue is Empty");
}

void Display(Queue *queue){
    if(!isEmpty(queue)){
        printf("\nThe elements are:");
        for (int i=queue->front; i!=queue->rear; i=(i+1)%Max_size)
            printf("%d ",queue->items[i]);
        printf("%d ",queue->items[queue->rear]);

    }
    else
        printf("\nThe queue is Empty!");
}



int main(){
    Queue *queue=(Queue*)malloc(sizeof(Queue));
    queue->front=-1;
    queue->rear=-1;


    printf("1. For Enqueue.");
    printf("\n2. For Dequeue.");
    printf("\n3. For Peek.");
    printf("\n4. For Displaly.");
    printf("\n0. For Quit.");

    int choice, data;

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
            Peek(queue);
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



