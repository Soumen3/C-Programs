#include<stdio.h>
void sort(int *arr, int range){
    for(int i=0; i<range; i++)
        for(int j=i+1; j<range; j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
}

void print(int *arr, int range){
    for(int i=0; i<range; i++)
        printf("%d ", arr[i]);
}

void main(){
    int range;
    printf("HOw many numbers you want to enter: \t");
    scanf("%d",&range);
    int arr[range];
    printf("Enter the numbers:\n");
    for(int i=0; i<range; i++)
        scanf("%d",&arr[i]);

    sort(arr, range);
    printf("\nAfter sorting the array\n");
    print(arr,range);
}
