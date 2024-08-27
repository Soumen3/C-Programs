#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, searchElement;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an integer array of size n
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Search for the element in the array
    int found = 0; // Flag to indicate if the element is found
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            printf("Element %d found at index %d.\n", searchElement, i);
            break; // Exit the loop once the element is found
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0; // Exit with a success code
}

