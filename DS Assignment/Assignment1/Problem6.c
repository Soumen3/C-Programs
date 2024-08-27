#include<stdio.h>

void main(){
    printf("How many numbers do you want display?\t");
    int elements;
    scanf("%d",&elements);
    if(elements==0){
        printf("You have enter value 0!");
        exit(0);
    }

    int first=0, second=1;
    printf("The series is:\n");
    for(int i=0; i<elements; i++){
        printf("%d ",first);
        int temp=first;
        first=second;
        second=temp+second;
    }
}
