#include<stdio.h>

void insertionSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int key=arr[i];
        int j;
        for(j=i-1; j>=0 && arr[j]>key; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}

int main () {


    printf("How many numbers do you want to enter:");
    int num;

    scanf("%d",&num);
    int arr[num];
    printf("\nEnter the values:\n");
    for(int i=0; i<num; i++) {
        scanf("%d",&arr[i]);
    }

        printf("\nYou have enter:\n");
    for(int i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }
    insertionSort(arr,num);
    printf("\nAfter sorting the array:\n");
    for(int i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }


}
