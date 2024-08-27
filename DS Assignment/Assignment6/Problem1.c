#include<stdio.h>
#include<stdlib.h>
#define Max_size 10

typedef struct Stack{
    int items[Max_size];
    int top;
}Stack;

int isEmpty(Stack *stack){
    return stack->top==-1;
}
int isFull(Stack *stack){
    return stack->top==Max_size-1;
}

void Push(Stack *stack, int data){
    if(isFull(stack)){
        printf("\nThe stack is overloaded!");
    }
    else{
        stack->top++;
        stack->items[stack->top]=data;
        printf("\n%d is pushed in the stack",data);
    }
}

void Pop(Stack *stack){
    if (isEmpty(stack))
        printf("\nThe stack is underloaded!");
    else{
        int item=stack->items[stack->top];
        stack->top--;
        printf("\n%d is popped from the stack",item);
    }
}

int Peek(Stack *stack){
        return stack->top;
}

void Display(Stack *stack){
    if (!isEmpty(stack)){
        printf("\nThe elements are:\n");
        for(int i=0; i<=stack->top; i++){
            printf("%d ",stack->items[i]);
        }
    }
    else
        printf("\nThe stack is underloaded!");
}



int main(){
    Stack *stack=(Stack*)malloc(sizeof(Stack));
    stack->top=-1;


    printf("1. For push.");
    printf("\n2. For pop.");
    printf("\n3. For Peek.");
    printf("\n4. For Displaly.");
    printf("\n0. For Quit.");

    int choice, data,index;

    do{
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("\nEnter the data:  ");
            scanf("%d",&data);
            Push(stack, data);
            break;
        case 2:
            Pop(stack);
            break;
        case 3:
            index= Peek(stack);
            if(index!=-1)
                printf("\nThe top elements is %d",stack->items[index]);
            else
                printf("\nThe stack is underloaded!");
            break;
        case 4:
            Display(stack);
            break;
        default:
            printf("\nInvalid choice! Enter valid Choice.");
        }
    }while(choice!=0);

    return 0;
}


