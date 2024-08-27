#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("enter the number of element you want:\t");
    int num;
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
}
