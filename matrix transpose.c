#include<stdio.h>
void transpose(int r, int c, int arr[][c]){

    int arr2[c][r];
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr2[j][i]=arr[i][j];
        }
    }


    printf("After transpose the array:\n");
    for (int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

}

void main(){
    printf("Enter the row and column of the array:\n");
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the array elements:\n");
    for (int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    transpose(r, c, arr);

}
