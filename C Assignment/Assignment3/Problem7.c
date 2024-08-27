#include<stdio.h>

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num>0)
        printf("This is a positive number.");
    else if( num<0)
        printf("This is a negative number.");
    else
        printf("The number is 0");
}

