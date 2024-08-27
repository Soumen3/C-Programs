#include<stdio.h>

void Asc_Selection_sort(int *arr, int num){
    for(int i=0; i<num-1; i++){
        int min=i;
        for(int j=i+1; j<num; j++){
        if(arr[j]<arr[min])
            min=j;
        }
        if(min!=i){
            arr[i]=arr[i]+arr[min];
            arr[min]=arr[i]-arr[min];
            arr[i]=arr[i]-arr[min];

        }
    }
}

void Desc_Selection_sort(int *arr, int num){
    for(int i=0; i<num-1; i++){
        int min=i;
        for(int j=i+1; j<num; j++){
        if(arr[j]>arr[min])
            min=j;
        }
        if(min!=i){
            arr[i]=arr[i]+arr[min];
            arr[min]=arr[i]-arr[min];
            arr[i]=arr[i]-arr[min];

        }
    }
}
void main(){
    printf("How many number you want to enter:\t");
    int num;
    scanf("%d",&num);
    int arr[num];
    printf("\nEnter the numbers:\t");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    int ch;

    printf("\nEnter your choice:\n1 for ascending and 0 for descending:\t");

    scanf("%d",&ch);
    if(ch==1){
        Asc_Selection_sort(arr,num);
        printf("\nThe array is sorted");
    }
    else if(ch==0){
        Desc_Selection_sort(arr,num);
        printf("\nThe array is sorted");

    }
    else{
        printf("\nInvalid input!");
        exit(0);
    }

    printf("\nAfter sorting the elements:\n");
    for(int i=0; i<num; i++){
        printf("%d ",arr[i]);
    }
}
