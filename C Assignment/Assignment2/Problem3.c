#include<stdio.h>

void main(){
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1, &num2);

    if(num1==num2)
        printf("The numbers are equal.");
    else if(num1<num2)
        printf("%d is greater than %d", num2, num1);
    else
        printf("%d is greater than %d", num1, num2);
}
