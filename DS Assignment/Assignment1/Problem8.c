#include<stdio.h>

void main(){
    int r,c;
    printf("Enter the number of row:\t");
    scanf("%d",&r);
    printf("Enter the number of column:\t");
    scanf("%d",&c);
    if (r!=c){
        printf("The row and column must be same!");
        exit(0);
    }

    int matrix[r][c];

    printf("Enter the value of matrix row wise:\n");
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++)
            scanf("%d",&matrix[i][j]);
    }
    printf("Your matrix is:\n");
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }

    int matrix_transpose[r][c];
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++)
            matrix_transpose[j][i]=matrix[i][j];
    }


    printf("After transpose the matrix:\n");
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++)
            printf("%d ",matrix_transpose[i][j]);
        printf("\n");
    }

    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if(matrix_transpose[i][j]!=matrix[i][j]){
                printf("The matrix is not symmetric.");
                exit(0);
            }
        }
    }
    printf("The matrix is symmetric.\n");

}
