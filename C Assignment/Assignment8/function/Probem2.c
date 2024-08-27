#include <stdio.h>

// A recursive function to calculate the sum of first n natural numbers
int sum(int n) {
  // Base case: if n is 1, return 1
  if (n == 1) {
    return 1;
  } else {
    // Recursive case: return n + sum of first n-1 natural numbers
    return n + sum(n - 1);
  }
}

// A main function to test the sum function
int main() {
  // Declare a variable to store the result
  int result;

  // Call the sum function with 20 as the argument
  result = sum(20);

  // Print the result
  printf("The sum of first 20 natural numbers is: %d\n", result);

  return 0;
}
