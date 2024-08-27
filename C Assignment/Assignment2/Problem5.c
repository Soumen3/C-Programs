#include<stdio.h>

void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int result=0;
    for (int i=1; i<=n; i++)
        result+=i;

    printf("The addition from 1 to %d is: %d",n,result);
}
