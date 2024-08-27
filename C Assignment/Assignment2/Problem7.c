#include<stdio.h>

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The multiplication table is:\n");
    for(int i=1; i<=10; i++)
        printf("%d X %d = %d\n",num, i, num*i);
}
