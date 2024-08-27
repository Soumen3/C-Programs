#include<stdio.h>

void main(){
    int num;
    printf("Enter the number:");
    int result=0;
    while(1){
       scanf("%d",&num);
       if(num==0)
            exit(0);
       result+=num;
       printf("The addition is %d\n",result);
    }
}
