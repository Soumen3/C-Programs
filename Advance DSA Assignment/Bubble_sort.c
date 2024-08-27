 #include<stdio.h>

 void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
 }

 void Bubble_sort(int* ele, int size){
    int flag;
    for (int i=0; i<size; i++){
        flag=0;
        for (int j=0; j<size-i-1; j++){
            if (ele[j] > ele[j+1]){
                swap(&ele[j], &ele[j+1]);
                flag=1;
            }
        }
        printf("No. %d iteration: ",i+1);
        for (int k=0; k<size; k++)
            printf("%d ",ele[k]);
        printf("\n");
        if(!flag)
            break;
    }
 }

 int main(){
    int data_set[]= {27, 15, 39, 21, 28, 70};
    int size=sizeof(data_set)/sizeof(int);
    Bubble_sort(data_set, size);
    printf("The data set after sorting:\n");
    for (int i=0; i<size; i++)
        printf("%d ",data_set[i]);
    return 0;
 }
