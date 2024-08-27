#include<stdio.h>
void largest(int *arr, int range){
    int large=arr[0], secLarge=arr[0];

    for(int i=1; i<range; i++)
        if(arr[i]>secLarge){
            if(arr[i]>large){
                 large=arr[i];
                 continue;
            }
            secLarge=arr[i];
        }

    printf("The large element is: %d", large);
    printf("\nThe second largest number is: %d", secLarge);
}

void main(){
    int range;
    printf("HOw many numbers you want to enter: \t");
    scanf("%d",&range);
    int arr[range];
    printf("Enter the numbers:\n");
    for(int i=0; i<range; i++)
        scanf("%d",&arr[i]);

    largest(arr,range);
}

