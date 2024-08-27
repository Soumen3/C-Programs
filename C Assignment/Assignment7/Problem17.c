#include <stdio.h>

int isSparseMatrix(int matrix[10][10], int rows, int columns) {
    int zeroCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    double totalElements = rows * columns;
    double threshold = 0.6; // Define a threshold, for example, 60% of elements being zero

    if ((double)zeroCount / totalElements > threshold) {
        return 1; // Matrix is sparse
    }

    return 0; // Matrix is not sparse
}

int main() {
    int matrix[10][10];
    int rows, columns;

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &columns);

    if (rows <= 0 || columns <= 0 || rows > 10 || columns > 10) {
        printf("Invalid size for the matrix.");
        return 1;
    }

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is a sparse matrix
    int result = isSparseMatrix(matrix, rows, columns);

    if (result) {
        printf("The given matrix is a sparse matrix.\n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }

    return 0;
}

