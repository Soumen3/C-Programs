#include <stdio.h>

// A function to add two numbers using pointers
int add(int *a, int *b) {
  // Return the sum of the values pointed by the pointers
  return *a + *b;
}

// A main function to test the add function
int main() {
  // Declare two integer variables
  int x, y;

  // Read two numbers from the user
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);

  // Call the add function with the addresses of x and y as arguments
  int result = add(&x, &y);

  // Print the result
  printf("The sum of %d and %d is: %d\n", x, y, result);

  return 0;
}
