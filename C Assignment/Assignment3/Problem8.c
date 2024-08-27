#include<stdio.h>

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
        printf("This number is divisible by 5 and 11");
    else
        printf("This number is not divisible");
}

