#include<stdio.h>

void main(){
    int matrix[4][4]={
                    {1,0,0,2},
                    {0,5,0,0},
                    {6,0,0,0},
                    {1,0,0,7},
    };
    int sparse[3][6];
    printf("The matrix is:\n");
    for (int i=0; i<4; i++){
        for(int j=0; j<4; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }

    int k=0;
    for (int i=0; i<4; i++)
        for(int j=0; j<4; j++)
        if(matrix[i][j]!=0){
            sparse[0][k]=i;
            sparse[1][k]=j;
            sparse[2][k]=matrix[i][j];
            k++;
        }
    printf("The sparse matrix is: \n");
    for(int i=0; i<3; i++){
        for (int j=0; j<6; j++)
            printf("%d ",sparse[i][j]);
        printf("\n");
    }
}
