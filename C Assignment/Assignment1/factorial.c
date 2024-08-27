#include<stdio.h>
void main(){
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);

    if(num<0)
        printf("The factorial of negative number is not possible.");
    else if(num==0)
        printf("The factorial of 0 is 1");
    else{
        int result=1;
        for(int i=1; i<=num; i++)
            result=result*i;

        printf("The factorial of %d is %d\n",num, result);
    }
}
