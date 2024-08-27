#include <stdio.h>

// A function to swap the value of two variables using a pointer
void swap(int *a, int *b) {
  // Declare a temporary variable to store the value of a
  int temp = *a;

  // Assign the value of b to a
  *a = *b;

  // Assign the value of temp to b
  *b = temp;
}

// A main function to test the swap function
int main() {
  // Declare two integer variables
  int x = 10;
  int y = 20;

  // Print the values before swapping
  printf("Before swapping: x = %d, y = %d\n", x, y);

  // Call the swap function with the addresses of x and y as arguments
  swap(&x, &y);

  // Print the values after swapping
  printf("After swapping: x = %d, y = %d\n", x, y);

  return 0;
}
