#include <stdio.h>

// A function to search an element in an array using a pointer
int search_array(int *arr, int size, int key) {
  // Loop through the array using a pointer
  for (int i = 0; i < size; i++) {
    // Check if the value pointed by the pointer is equal to the key
    if (*(arr + i) == key) {
      // Return the index of the element
      return i;
    }
  }

  // Return -1 if the element is not found
  return -1;
}

// A main function to test the search_array function
int main() {
  // Declare an array of integers
  int a[] = {10, 20, 30, 40, 50};

  // Find the size of the array
  int n = sizeof(a) / sizeof(a[0]);

  // Declare a variable to store the key
  int k;

  // Read a key from the user
  printf("Enter a key to search: ");
  scanf("%d", &k);

  // Call the search_array function with the array, its size and the key as arguments
  int result = search_array(a, n, k);

  // Print the result
  if (result != -1) {
    printf("The key %d is found at index %d.\n", k, result);
  } else {
    printf("The key %d is not found in the array.\n", k);
  }

  return(0);
}
