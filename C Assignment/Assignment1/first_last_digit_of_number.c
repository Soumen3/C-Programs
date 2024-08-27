#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);
    int temp=num;

    int rem;
    while(num){
        rem=num%10;
        num/=10;
    }
    printf("The first digit is %d\n",rem);

    printf("The last digit is %d\n",temp%10);

    return 0;
}
