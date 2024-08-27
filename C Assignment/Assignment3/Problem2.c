#include<stdio.h>

void main(){
    int num1, num2, num3;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    int largest=num1;

    if(largest<num2)
        largest=num2;
    if(largest<num3)
        largest=num3;
    printf("The largest number is %d",largest);
}
