#include<stdio.h>

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;
    int pow;
    printf("Enter the power: ");
    scanf("%d",&pow);

    if(pow ==0)
        printf("The result is 1");
    else{
        for(int i=1; i<pow; i++)
        num=num*temp;

        printf("The result is %d", num);
    }

}
