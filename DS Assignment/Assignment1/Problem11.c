#include<stdio.h>

void main(){
    printf("Enter the number of elements:\t");
    int elements;
    scanf("%d",&elements);
    int arr[elements];

    printf("Enter the elements:\n");
    for(int i=0; i<elements; i++)
        scanf("%d",&arr[i]);

    int flag=0;
    printf("The duplicate values are:\n");
    for (int i=0; i<elements; i++){
        int duplicate=0;
        for (int j=i+1; j<elements; j++){
            if (arr[i]==arr[j]){
                duplicate=1;
                flag=1;
            }
        }
        if (duplicate==1)
            printf("%d ",arr[i]);
    }

    if(flag==0)
        printf("There is no duplicate value.");
}
