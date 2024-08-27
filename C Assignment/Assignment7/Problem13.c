#include <stdio.h>

void transposeMatrix(int rows, int columns, int matrix[10][10]) {
    int transpose[10][10];

    // Calculating the transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the transpose of the matrix
    printf("Transpose of the Matrix:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
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

    // Transposing the matrix
    transposeMatrix(rows, columns, matrix);

    return 0;
}

