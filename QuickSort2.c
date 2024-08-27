#include<stdio.h>
void swap(int* ele1, int* ele2){
    int temp= *ele1;
    *ele1= *ele2;
    *ele2= temp;
}

int partation(int arr[], int low, int high){
    int pivot=arr[low];
    int start=low+1;
    //end= high;
    while(start<high){
        while(arr[start]<pivot){
            start++;
        }
        while(arr[high]>pivot){
            high--;
        }
        if (start<high){
            swap(&arr[start], &arr[high]);
        }
        if (start>high){
            swap(&arr[start], &arr[low]);
        }
    }
    return high;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int loc=partation(arr, low, high);
        quickSort(arr, low, loc-1);
        quickSort(arr, loc+1, high);
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

    quickSort(arr,0, num-1);
    printf("\nAfter sorting the array:\n");
    for(int i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }


}
