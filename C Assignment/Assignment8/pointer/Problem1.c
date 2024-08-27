#include <stdio.h>

// A function to find the sum of all the elements of an array using pointers
int sum_array(int *arr, int size) {
  // Declare a variable to store the sum
  int sum = 0;

  // Loop through the array using a pointer
  for (int i = 0; i < size; i++) {
    // Add the value pointed by the pointer to the sum
    sum += *(arr + i);
  }

  // Return the sum
  return sum;
}

// A main function to test the sum_array function
int main() {
  // Declare an array of integers
  int a[] = {10, 20, 30, 40, 50};

  // Find the size of the array
  int n = sizeof(a) / sizeof(a[0]);

  // Call the sum_array function with the array and its size as arguments
  int result = sum_array(a, n);

  // Print the result
  printf("The sum of all the elements of the array is: %d\n", result);

  return 0;
}
