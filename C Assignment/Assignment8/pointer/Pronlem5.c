#include <stdio.h>

// A function to copy one array to another using a pointer
void copy_array(int *source, int *target, int size) {
  // Loop through the source array using a pointer
  for (int i = 0; i < size; i++) {
    // Copy the value pointed by the source pointer to the target pointer
    *(target + i) = *(source + i);
  }
}

// A main function to test the copy_array function
int main() {
  // Declare two arrays of integers
  int a[] = {10, 20, 30, 40, 50};
  int b[5];

  // Find the size of the array
  int n = sizeof(a) / sizeof(a[0]);

  // Call the copy_array function with the source, target and size as arguments
  copy_array(a, b, n);

  // Print the source and target arrays
  printf("The source array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("The target array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", b[i]);
  }
  printf("\n");

  return 0;
}
