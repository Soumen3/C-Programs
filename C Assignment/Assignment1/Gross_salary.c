#include<stdio.h>
void main(){
    float salary;
    printf("Enter the Ramash's salary: ");
    scanf("%f",&salary);

    //salary+DA
     int da=((salary*40)/100);
    //salary+HRA
    salary=salary+((salary*20)/100);

    printf("With DA and HRA the Ramesh's salary is %.2f\n",salary+da);
}
