#include <stdio.h>

int main() {
    int array[100]; // Assuming a maximum array size of 100
    int size, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size for the array.");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position from which you want to delete the element: ");
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Invalid position for deletion.");
        return 1;
    }

    // Shift elements to overwrite the element at the specified position
    for (int i = position; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--; // Decrease the size of the array

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

