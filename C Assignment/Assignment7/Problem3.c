#include <stdio.h>

int main() {
    int array[100]; // Assuming a maximum array size of 100
    int size, position, newValue;

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

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position for insertion.");
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &newValue);

    // Shift elements to make space for the new value
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new value at the specified position
    array[position] = newValue;
    size++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

