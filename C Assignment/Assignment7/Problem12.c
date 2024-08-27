#include <stdio.h>

void matrixAddition(int rows, int columns, int matrix1[10][10], int matrix2[10][10]) {
    int sumMatrix[10][10];

    // Adding corresponding elements of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result of matrix addition
    printf("Result of Matrix Addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }
}

void matrixSubtraction(int rows, int columns, int matrix1[10][10], int matrix2[10][10]) {
    int subMatrix[10][10];

    // Subtracting corresponding elements of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            subMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the result of matrix subtraction
    printf("\nResult of Matrix Subtraction:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", subMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10];
    int rows, columns;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &columns);

    if (rows <= 0 || columns <= 0 || rows > 10 || columns > 10) {
        printf("Invalid size for the matrices.");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Performing addition and subtraction of matrices
    matrixAddition(rows, columns, matrix1, matrix2);
    matrixSubtraction(rows, columns, matrix1, matrix2);

    return 0;
}
