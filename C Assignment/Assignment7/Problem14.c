
#include <stdio.h>

void sumRowsColumns(int rows, int columns, int matrix[10][10]) {
    int rowSum[10] = {0}; // Initializing array to store sums of each row
    int columnSum[10] = {0}; // Initializing array to store sums of each column

    // Calculate the sum of each row and store in rowSum array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Calculate the sum of each column and store in columnSum array
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            columnSum[j] += matrix[i][j];
        }
    }

    // Displaying the sums of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Displaying the sums of each column
    printf("\nSum of each column:\n");
    for (int j = 0; j < columns; j++) {
        printf("Column %d: %d\n", j + 1, columnSum[j]);
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

    // Calculate and display the sum of each row and each column
    sumRowsColumns(rows, columns, matrix);

    return 0;
}
