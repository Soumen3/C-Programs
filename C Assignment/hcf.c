#include<stdio.h>

void main(){
    int num1, num2;
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);
    int hcf;
    for (int i=1; i<=num1 || i<=num2; i++)
        if (num1%i==0 && num2%i==0)
            hcf=i;
    printf("The hcf of the two numbers is: %d", hcf);
}
