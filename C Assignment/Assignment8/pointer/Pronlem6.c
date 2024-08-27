#include <stdio.h>

// A function to swap two arrays using pointers
void swap_array(int *a, int *b, int size) {
  // Loop through the arrays using pointers
  for (int i = 0; i < size; i++) {
    // Swap the values pointed by the pointers using a temporary variable
    int temp = *(a + i);
    *(a + i) = *(b + i);
    *(b + i) = temp;
  }
}

// A main function to test the swap_array function
int main() {
  // Declare two arrays of integers
  int x[] = {10, 20, 30, 40, 50};
  int y[] = {60, 70, 80, 90, 100};

  // Find the size of the arrays
  int n = sizeof(x) / sizeof(x[0]);

  // Print the arrays before swapping
  printf("Before swapping:\n");
  printf("x array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");

  printf("y array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", y[i]);
  }
  printf("\n");

  // Call the swap_array function with the arrays and their size as arguments
  swap_array(x, y, n);

  // Print the arrays after swapping
  printf("After swapping:\n");
  printf("x array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");

  printf("y array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", y[i]);
  }
  printf("\n");

  return(0);
}
