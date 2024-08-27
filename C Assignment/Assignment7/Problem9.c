#include <stdio.h>

int searchElement(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int array[100]; // Assuming a maximum array size of 100
    int size, searchKey, index;

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

    printf("Enter the element you want to search: ");
    scanf("%d", &searchKey);

    // Search for the element in the array
    index = searchElement(array, size, searchKey);

    if (index != -1) {
        printf("Element %d found at index: %d\n", searchKey, index);
    } else {
        printf("Element %d not found in the array.\n", searchKey);
    }

    return 0;
}

