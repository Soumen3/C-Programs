#include<stdio.h>

int counter=0;


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Position(int elements[], int left, int right)
{
    int loc = left, flag;

    // Place the left most element in the correct position
    while (left < right)
    {
        while (elements[loc] < elements[right]){
            right--;
            counter++;
        }


        swap(&elements[loc], &elements[right]);
        loc = right;

        while (elements[left] < elements[loc]){
            counter++;
            left++;
        }


        swap(&elements[loc], &elements[left]);
        loc = left;
    }
    return loc;
}

void Quick_sort(int elements[], int left, int right)
{
    if (left < right)
    {
        int loc = Position(elements, left, right);
        Quick_sort(elements, left, loc - 1);
        Quick_sort(elements, loc + 1, right);
    }
}



void merge(int elements[], int left, int mid, int right){
    int storage[right-left+1];

    int i=left, j=mid+1, k=0;
    while (i<=mid && j<=right){
        counter++;
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


 int main(){

    int data_set[]= {97, 65, 34, 72, 85, 12, 51, 78, 93, 29, 45, 63, 18, 80, 36, 52, 67, 24, 40, 57};
    int size=sizeof(data_set)/sizeof(int);

    Merge_sort(data_set, 0, size - 1);

    printf("The comparison in Merge sort is %d times.\n",counter);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);

    counter=0;
    int data_set2[]= {97, 65, 34, 72, 85, 12, 51, 78, 93, 29, 45, 63, 18, 80, 36, 52, 67, 24, 40, 57};
    Quick_sort(data_set2, 0, size-1);
    printf("\n\nThe comparison in Quick sort is %d times.\n",counter);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);

    printf("\n\n");
    return 0;
 }
