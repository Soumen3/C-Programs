#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i= (low- 1); // Index of smaller element and indicates
                 // the right position of pivot found so far

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int lb, int ub){
    if(lb<ub){
        int loc=partition(arr, lb, ub);
        quickSort(arr,lb, loc-1);
        quickSort(arr, lb+1, ub);
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
