#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *ele=(int *)calloc(n, sizeof(int));

    if(ele==NULL){
        printf("Memory allocation faild ");
        exit(0);
    }

    printf("Enter the elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", ele+i);

    printf("The elements are:\n");
    for (int i=0; i<n; i++)
        printf("%d ",*(ele+i));

    free(ele);
}
