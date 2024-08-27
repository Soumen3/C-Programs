#include<stdio.h>
void print(int r1, int c2, int m[][c2]){
    printf("\nThe result is:\n");
    for (int i=0; i<r1; i++){
        for (int j=0; j<c2; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int r1, int c1, int r2, int c2,int m1[][c1], int m2[][c2]){
    int m[r1][c2];
    for (int i=0; i<r1;i++){
        for (int j=0; j<c2; j++){
            int sum=0;
            for (int k=0; k<c1; k++){
                sum=sum+ m1[i][k]*m2[k][j];
            }
            m[i][j]=sum;
        }
    }
    print(r1,c2, m);
}

void main(){

    int r1,r2,c1,c2;
    printf("Enter the row and column of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of second matrix:\n");
    scanf("%d%d",&r2,&c2);

    int m1[r1][c1], m2[r2][c2];
    printf("Enter the elements of the first matrix:\n");
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            scanf("%d",&m2[i][j]);
        }
    }

    printf("\nThe first matrix is:\n");
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is:\n");
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    if(c1==r2)
        multiplication(r1,c1,r2,c2,m1, m2);
    else
        printf("Can't multiply the matrix");
}
