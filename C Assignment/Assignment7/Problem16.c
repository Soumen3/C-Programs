
#include <stdio.h>

int isIdentityMatrix(int matrix[10][10], int rows, int columns) {
    if (rows != columns) {
        return 0; // If the matrix is not square, it can't be an identity matrix
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return 0; // If diagonal elements are not 1 and non-diagonal elements are not 0, it's not an identity matrix
            }
        }
    }

    return 1; // Matrix is an identity matrix
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

    // Check if the matrix is an identity matrix
    int result = isIdentityMatrix(matrix, rows, columns);

    if (result) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}
