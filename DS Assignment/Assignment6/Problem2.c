#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int item;
    struct Node *next;
}Node;

typedef struct Stack{
    Node *start;
    Node *top;
}Stack;

int isEmpty(Stack *stack){
    return stack->top==NULL && stack->start==NULL;
}

void Push(Stack *stack, int data){
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->item=data;
    newNode->next=NULL;
    if(isEmpty(stack)){
        stack->start=newNode;
        stack->top=newNode;
    }
    else{
        stack->top->next=newNode;
        stack->top=newNode;
    }
    printf("\n%d is pushed in the stack.",data);
}

void Pop(Stack *stack){
    if(!isEmpty(stack)){
        if (stack->start->next==NULL){
            Node *temp=stack->top;
            stack->top=NULL;
            stack->start=NULL;
            printf("\n%d is popped",temp->item);
            free(temp);
        }
        else{
            Node *temp=stack->start;
            while (temp->next->next!=NULL){
                temp=temp->next;
            }
            printf("\n%d is popped",temp->next->item);
            stack->top=temp;
            free(stack->top->next);
            stack->top->next=NULL;
        }
    }
    else
        printf("\nThe stack is underloaded!");
}

Node *Peek(Stack *stack){
    return stack->top;
}

void Display(Stack *stack){
    if(!isEmpty(stack)){
        Node *temp=stack->start;
        printf("\nThe elements are:\n");
        while(temp!=NULL){
            printf("%d -> ",temp->item);
            temp=temp->next;
        }
        printf("NULL");
    }
    else{
        printf("\nThe stack is overloaded.");
    }
}

int main(){
    Stack *stack=(Stack*)malloc(sizeof(Stack));
    stack->start=NULL;
    stack->top=NULL;

    printf("1. For push.");
    printf("\n2. For pop.");
    printf("\n3. For Peek.");
    printf("\n4. For Displaly.");
    printf("\n0. For Quit.");

    int choice, data;
    Node *node;

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
            node = Peek(stack);
            if(node!=NULL)
                printf("\nThe top elements is %d",node->item);
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
}
