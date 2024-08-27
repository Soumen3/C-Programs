#include<stdio.h>

void merge(int elements[], int left, int mid, int right){
    int storage[right-left+1];

    int i=left, j=mid+1, k=0;
    while (i<=mid && j<=right){
        if(elements[i]<elements[j]){
            storage[k]=elements[i];
            i++;
        }
        else{
            storage[k]=elements[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        storage[k]=elements[i];
        i++;
        k++;
    }
    while(j<=right){
        storage[k]=elements[j];
        j++;
        k++;
    }

    //change in original array
    for (int i=left, j=0; i<=right; i++, j++){
        elements[i]=storage[j];
    }
}

void Merge_sort(int elements[], int left, int right){

    if (left < right){
        int mid=(left+right)/2;
        Merge_sort(elements, left, mid);
        Merge_sort(elements, mid+1, right);
        merge(elements, left, mid, right);
    }
}

int main()
{
    int data_set[] = {27, 15, 39, 21, 28, 70};
    int size = sizeof(data_set) / sizeof(int);
    Merge_sort(data_set, 0, size - 1);
    printf("The data set after sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", data_set[i]);
    return 0;
}

