#include<stdio.h>

void main(){
    int sub1, sub2, sub3;
    printf("Enter 3 subject's number:\n");
    scanf("%d%d%d",&sub1, &sub2, &sub3);

    printf("Enter  your grand total mark: ");
    int grandTotal;
    scanf("%d",&grandTotal);

    int percentage=(sub1+sub2+sub3)*100/grandTotal;
    printf("You have gotten %d%% marks\n",percentage);

    if(percentage>=60)
        printf("You have passed in First division");
    else if(percentage>=50)
        printf("You have passed in Second division");
    else if(percentage>=40)
        printf("You have passed in Third division");
    else
        printf("You are fail");

}
