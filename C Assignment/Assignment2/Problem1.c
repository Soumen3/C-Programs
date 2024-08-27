#include<stdio.h>

void main(){
    int num;
    printf("Enter how many number you want to enter: ");
    scanf("%d",&num);
    int arr[num];

    printf("Enter the numbers:\n");
    for(int i=0; i<num; i++)
        scanf("%d",&arr[i]);

    printf("The negative numbers are:\n");
    for(int i=0; i<num; i++)
        if(arr[i]<0)
            printf("%d ",arr[i]);
}
