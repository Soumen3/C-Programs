#include <stdio.h>

// A recursive function to calculate the nth Fibonacci number
int fib(int n) {
  // Base case: if n is 0 or 1, return n
  if (n == 0 || n == 1) {
    return n;
  } else {
    // Recursive case: return the sum of previous two Fibonacci numbers
    return fib(n - 1) + fib(n - 2);
  }
}

// A main function to test the fib function
int main() {
  // Declare a variable to store the number of terms
  int n;

  // Read the number of terms from the user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Print the Fibonacci series
  printf("The Fibonacci series is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", fib(i));
  }
  printf("\n");

  return 0;
}
