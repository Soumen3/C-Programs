#include<stdio.h>

void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Reverse of the array:\n");
    for (int i=n-1; i>=0; i--)
        printf("%d ",arr[i]);
}
