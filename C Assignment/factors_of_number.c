#include<stdio.h>

void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The factors of the number is:");
    for(int i=1; i<=num/2; i++)
        if(num%i==0)
            printf("%d ",i);
    printf("%d",num);
}
