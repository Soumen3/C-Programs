#include <stdio.h>

// A function to find the maximum between two numbers
int max(int a, int b) {
  // Return the larger number
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

// A function to find the minimum between two numbers
int min(int a, int b) {
  // Return the smaller number
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

// A main function to test the max and min functions
int main() {
  // Declare two integer variables
  int x, y;

  // Read two numbers from the user
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);

  // Call the max and min functions with x and y as arguments
  int maximum = max(x, y);
  int minimum = min(x, y);

  // Print the results
  printf("The maximum between %d and %d is: %d\n", x, y, maximum);
  printf("The minimum between %d and %d is: %d\n", x, y, minimum);

  return 0;
}
