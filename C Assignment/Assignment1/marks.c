#include<stdio.h>

void main(){
    float marks[5];
    printf("Enter the marks:\n");
    for(int i=0; i<5; i++)
        scanf("%f",&marks[i]);
    int total_marks;
    printf("Enter the total marks of the exam: ");
    scanf("%d",&total_marks);

    float aggregate=0;
    for(int i=0; i<5; i++)
        aggregate=aggregate+marks[i];
    if (aggregate>total_marks){
        printf("you have enter wrong marks or wrong total marks.\n");
        exit(0);
    }
    printf("Your total aggregate mark is %.2f\n",aggregate);

    printf("Your percentage is %.2f\n", (100*aggregate)/total_marks);

}
