#include<stdio.h>

void Asc_sort(int *arr, int num) {
    for(int i=0; i<num; i++) {
        int flag=0;
        for(int j=0; j<num-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=arr[j+1]-arr[j];
                arr[j+1]=arr[j+1]-arr[j];
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

void Desc_sort(int *arr, int num) {
    for(int i=0; i<num; i++) {
        int flag=0;
        for(int j=0; j<num-i-1; j++) {
            if(arr[j]<arr[j+1]) {
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=arr[j+1]-arr[j];
                arr[j+1]=arr[j+1]-arr[j];
                flag=1;
            }
        }
        if(flag==0)
            break;
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

    int ch;

    printf("\nEnter your choice:\n1 for ascending and 0 for descending:\t");

    scanf("%d",&ch);
    if(ch==1){
        Asc_sort(arr,num);
        printf("\nThe array is sorted");
    }
    else if(ch==0){
        Desc_sort(arr,num);
        printf("\nThe array is sorted");

    }
    else{
        printf("\nInvalid input!");
        exit(0);
    }
    printf("\nThe array after sorted:\n");
    for(int i=0; i<num; i++)
        printf("%d  ",arr[i]);

}
