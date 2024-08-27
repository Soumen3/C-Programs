#include<stdio.h>

int search(int *p, int size){
    printf("Enter the number which you want to search:");
    int n;
    scanf("%d",&n);
    int low=0, mid, high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(n==p[mid]){
            return mid;
        }
        else if(n<p[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}


int main(){
    printf("How many numbers you want to enter:\t");
    int num;
    scanf("%d",&num);
    int arr[num];
    int len;
    len=sizeof(arr)/sizeof(int);
    printf("Enter the values:\n");
    for(int i=0; i<num; i++)
        scanf("%d",&arr[i]);

    int index=search(arr, len);
    if(index>=0){
        printf("The number is found. And the index number is %d",index);
    }
    else{
        printf("The number is not found....");
    }
    return 0;
}
