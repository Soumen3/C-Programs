#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *ele=(int *) calloc(n, sizeof(int));
    if (ele==NULL){
        printf("Memory allocation failed.");
        exit(0);
    }

    printf("Enter the numbers:\n");
    for(int i=0; i<n; i++)
       scanf("%d",&ele[i]);

    printf("The entered elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d ",ele[i]);

    int ne;
    printf("\nEnter the new size");
    scanf("%d",&ne);

    int *new_ele= (int *)realloc(ele, ne*sizeof(int));
    printf("\nEnter the new numbers:\n");
    for(int i=n; i<ne; i++)
       scanf("%d",&new_ele[i]);

    printf("\nThe new elements are:\n");
    for(int i=n; i<ne; i++)
        printf("%d ",new_ele[i]);

    free(ele);
    free(new_ele);
}

