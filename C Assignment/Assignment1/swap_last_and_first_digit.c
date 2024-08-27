#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);
    int temp=num;
    int last_digit=num%10;
    printf("The last digit is %d\n",last_digit);

    int rem,counter=0;
    while(num){
        rem=num%10;
        num/=10;
        counter++;
    }
    printf("The first digit is %d\n",rem);

    //first to last
    temp=temp/10;
    temp=temp*10+rem;

    //last to first
    temp=temp%(int)(pow(10,counter-1));
    temp=((int)pow(10,counter-1)* last_digit)+temp;
    printf("After swapping of last digit and first digit: %d\n",temp);

    return 0;
}

