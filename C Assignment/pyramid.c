#include<stdio.h>

void main(){
    int row;
    printf("Enter the number if row: ");
    scanf("%d",&row);
    printf("the pattern is:\n");
    for(int i=1; i<=row; i++){
        for(int k=i; k<row; k++)
            printf(" ");
        for (int j=0; j<i;j++)
            printf("%d",j%2);
        printf("\n");
    }
}


