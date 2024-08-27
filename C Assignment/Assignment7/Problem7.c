#include <stdio.h>

int main() {
    int array[100]; // Assuming a maximum array size of 100
    int size, i;
    int smallest, largest;

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

    // Assuming the first element of the array as both smallest and largest initially
    smallest = largest = array[0];

    // Finding the smallest and largest elements in the array
    for (i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}


