#include <stdio.h>

// A recursive function to calculate the power of a number
int power(int x, int n) {
  // Base case: if n is 0, return 1
  if (n == 0) {
    return 1;
  } else {
    // Recursive case: return x times the power of x to the n-1
    return x * power(x, n - 1);
  }
}

// A main function to test the power function
int main() {
  // Declare two integer variables
  int base, exponent;

  // Read the base and exponent from the user
  printf("Enter the base and exponent: ");
  scanf("%d %d", &base, &exponent);

  // Call the power function with base and exponent as arguments
  int result = power(base, exponent);

  // Print the result
  printf("%d raised to the power of %d is: %d\n", base, exponent, result);

  return 0;
}
