#include<stdio.h>
void update(int arr[], int size){
    for (int i=0; i<size; i++)
        arr[i]=arr[i]*2;
    printf("The array in the update function:\n");
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);
}

void main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    update(arr, sizeof(arr)/sizeof(int));
    printf("\nThe array in the main function:\n");
    for (int i=0; i<sizeof(arr)/sizeof(int); i++)
        printf("%d ", arr[i]);
}
