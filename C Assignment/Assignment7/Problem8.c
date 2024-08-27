#include <stdio.h>

void removeDuplicates(int array[], int *size) {
    int i, j, k;
    for (i = 0; i < *size; i++) {
        for (j = i + 1; j < *size;) {
            if (array[j] == array[i]) {
                for (k = j; k < *size - 1; k++) {
                    array[k] = array[k + 1];
                }
                (*size)--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int array[100]; // Assuming a maximum array size of 100
    int size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size for the array.");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Removing duplicate elements
    removeDuplicates(array, &size);

    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

