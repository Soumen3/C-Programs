#include<stdio.h>
#include<stdlib.h>
#define Max_size 10

typedef struct Queue{
    int items[Max_size];
    int front;
    int rear;
} Queue;

int isEmpty(Queue *queue){
    return (queue->front == -1);
}

int isFull(Queue *queue){
    return queue->rear == Max_size-1;
}

void Enqueue(Queue *queue, int data){
    if (isFull(queue)){
        if (queue->front!=0){
            int distance=queue->front;

            for(int i=queue->front; i<=queue->rear; i++)
                queue->items[i-distance]=queue->items[i];
            queue->front-=distance;
            queue->rear-=distance;
        }
        else
            printf("\nThe queue is full!");
    }
    else{
        if (isEmpty(queue))
            queue->front =0;
        queue->rear++;
        queue->items[queue->rear]=data;
        printf("\n%d is enqueued",data);
    }
}

void Dequeue(Queue *queue){
    if (isEmpty(queue))
        printf("\nThe queue is already empty!");
    else{
        int item= queue->items[queue->front];
        if (queue->front == queue->rear){
            queue->front=-1;
            queue->rear=-1;
        }
        else
            queue->front++;

        printf("\n%d is dequeued",item);
    }
}

int Peek(Queue *queue){
    if(!isEmpty(queue))
        return queue->items[queue->front];
}

void Display(Queue *queue){
    if (isEmpty(queue))
        printf("\nThe queue is Empty!");
    else{
        printf("\nThe elements are:\n");
        for (int i=queue->front; i<=queue->rear; i++)
            printf("%d ",queue->items[i]);
    }

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
            printf("\nThe front element is %d",Peek(queue));
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
