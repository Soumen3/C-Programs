#include<stdio.h>
void main(){
    int range;
    printf("How many numbers you want to enter: ");
    scanf("%d",&range);
    int arr[range];

    printf("Enter the elements:\n");
    for (int i=0; i<range; i++)
        scanf("%d",&arr[i]);

    int result=0;
    for (int i=0; i<range; i++)
        result+=arr[i];
    printf("The sum of all numbers is %d",result);

}

