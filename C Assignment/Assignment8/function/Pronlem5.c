#include <stdio.h>

// A recursive function to find the sum of digits of a number
int sum_of_digits(int n) {
  // Base case: if n is less than 10, return n
  if (n < 10) {
    return n;
  } else {
    // Recursive case: return the last digit plus the sum of digits of the remaining number
    return n % 10 + sum_of_digits(n / 10);
  }
}

// A main function to test the sum_of_digits function
int main() {
  // Declare a variable to store the number
  int num;

  // Read a number from the user
  printf("Enter a number: ");
  scanf("%d", &num);

  // Call the sum_of_digits function with num as the argument
  int result = sum_of_digits(num);

  // Print the result
  printf("The sum of digits of %d is: %d\n", num, result);

  return 0;
}
