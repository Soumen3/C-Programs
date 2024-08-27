#include<stdio.h>

void main(){
    int row;
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("the pattern is:\n");
    for(int i=0; i<row; i++){
        for (int j=i; j<row;j++)
            printf("*");
        printf("\n");
    }
}
