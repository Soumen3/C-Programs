#include<stdio.h>

void Insertion_sort(int* ele, int size){
    int temp;
    for(int i=1; i<size; i++){
        temp=ele[i];
        int j;
        for (j=i-1; j>=0 && ele[j]>temp; j--){
            ele[j+1]=ele[j];
        }
        ele[j+1]=temp;

        printf("No. %d iteration: ",i-1);
        for (int k=0; k<size; k++)
            printf("%d ",ele[k]);
        printf("\n");
    }
}


 int main(){
    int data_set[]= {27, 15, 39, 21, 28, 70};
    int size=sizeof(data_set)/sizeof(int);
    Insertion_sort(data_set, size);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);
    return 0;
 }
