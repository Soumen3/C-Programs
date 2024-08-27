#include<stdio.h>

void main(){
    int row;
    printf("Enter the number if row: ");
    scanf("%d",&row);
    printf("the pattern is:\n");
    int flag;
    for(int i=1; i<=row; i++){
        if (i==1)
            flag=i;
        for(int k=i; k<row; k++)
            printf(" ");
        for (int j=1; j<=flag;j++)
            printf("%d",j);
        flag+=2;
        printf("\n");
    }
}



