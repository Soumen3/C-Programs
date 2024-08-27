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

void Bubble_sort(int* ele, int size){
    int flag;
    for (int i=0; i<size; i++){
        flag=0;
        for (int j=0; j<size-i-1; j++){
            counter++;
            if (ele[j] > ele[j+1]){
                swap(&ele[j], &ele[j+1]);
                flag=1;
            }
        }
        if(!flag)
            break;
    }
}


 int main(){
    int data_set[]= {27, 15, 39, 21, 28, 70};
    int size=sizeof(data_set)/sizeof(int);
    Bubble_sort(data_set, size);
    printf("The comparison in bubble sort is %d times.\n",counter);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);

    counter=0;
    int data_set2[]= {27, 15, 39, 21, 28, 70};
    Quick_sort(data_set2, 0, size-1);
    printf("\n\nThe comparison in Quick sort is %d times.\n",counter);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);

    printf("\n\n");
    return 0;
 }

