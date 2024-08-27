#include<stdio.h>

 void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
 }

void Selection_sort(int* ele, int size){
    int min;
    for (int i=0; i<size; i++){
        min=i;
        for (int j=i+1; j<size; j++){
            if (ele[j]<ele[min])
                min=j;
        }
        if (min!=i)
            swap(&ele[i],&ele[min]);
        printf("No. %d iteration: ",i+1);
        for (int k=0; k<size; k++)
            printf("%d ",ele[k]);
        printf("\n");
    }
}

 int main(){
    int data_set[]= {27, 15, 39, 21, 28, 70};
    int size=sizeof(data_set)/sizeof(int);
    Selection_sort(data_set, size);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);
    return 0;
 }
