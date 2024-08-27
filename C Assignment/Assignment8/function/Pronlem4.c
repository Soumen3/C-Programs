#include <stdio.h>

// A function to swap two integers using call by value method
void swap_by_value(int a, int b) {
  // Print the values before swapping
  printf("Before swapping by value: a = %d, b = %d\n", a, b);

  // Swap the values using a temporary variable
  int temp = a;
  a = b;
  b = temp;

  // Print the values after swapping
  printf("After swapping by value: a = %d, b = %d\n", a, b);
}

// A function to swap two integers using call by reference method
void swap_by_reference(int *a, int *b) {
  // Print the values before swapping
  printf("Before swapping by reference: a = %d, b = %d\n", *a, *b);

  // Swap the values using a temporary variable
  int temp = *a;
  *a = *b;
  *b = temp;

  // Print the values after swapping
  printf("After swapping by reference: a = %d, b = %d\n", *a, *b);
}

// A main function to test the swap functions
int main() {
  // Declare two integer variables
  int x = 10;
  int y = 20;

  // Call the swap_by_value function with x and y as arguments
  swap_by_value(x, y);

  // Call the swap_by_reference function with the addresses of x and y as arguments
  swap_by_reference(&x, &y);

  return 0;
}
