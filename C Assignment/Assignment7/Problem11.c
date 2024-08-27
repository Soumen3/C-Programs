
#include <stdio.h>

void findSecondHighest(int array[], int size) {
    int firstMax, secondMax;

    // Initialize firstMax and secondMax to the first two elements of the array
    if (array[0] > array[1]) {
        firstMax = array[0];
        secondMax = array[1];
    } else {
        firstMax = array[1];
        secondMax = array[0];
    }

    // Traverse the array to find the firstMax and secondMax
    for (int i = 2; i < size; i++) {
        if (array[i] > firstMax) {
            secondMax = firstMax;
            firstMax = array[i];
        } else if (array[i] > secondMax && array[i] != firstMax) {
            secondMax = array[i];
        }
    }

    if (secondMax == firstMax) {
        printf("There is no second highest element. All elements are the same.\n");
    } else {
        printf("The second highest element in the array is: %d\n", secondMax);
    }
}

int main() {
    int array[100]; // Assuming a maximum array size of 100
    int size;

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

    findSecondHighest(array, size);

    return 0;
}
