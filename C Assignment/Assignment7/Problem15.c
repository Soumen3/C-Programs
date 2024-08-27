#include <stdio.h>

void matrixMultiplication(int rows1, int columns1, int matrix1[10][10], int rows2, int columns2, int matrix2[10][10]) {
    if (columns1 != rows2) {
        printf("Matrix multiplication not possible. Column of the first matrix must be equal to the row of the second matrix.\n");
        return;
    }

    int product[10][10];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10];
    int rows1, columns1, rows2, columns2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    if (rows1 <= 0 || columns1 <= 0 || rows1 > 10 || columns1 > 10) {
        printf("Invalid size for the first matrix.");
        return 1;
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    if (rows2 <= 0 || columns2 <= 0 || rows2 > 10 || columns2 > 10) {
        printf("Invalid size for the second matrix.");
        return 1;
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Performing matrix multiplication
    matrixMultiplication(rows1, columns1, matrix1, rows2, columns2, matrix2);

    return 0;
}

