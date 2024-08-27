#include <stdio.h>

// A function to check if a number is even
int is_even(int n) {
  // Return 1 if n is divisible by 2, otherwise return 0
  if (n % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

// A function to check if a number is odd
int is_odd(int n) {
  // Return 1 if n is not divisible by 2, otherwise return 0
  if (n % 2 != 0) {
    return 1;
  } else {
    return 0;
  }
}

// A main function to test the is_even and is_odd functions
int main() {
  // Declare a variable to store the number
  int num;

  // Read a number from the user
  printf("Enter a number: ");
  scanf("%d", &num);

  // Call the is_even and is_odd functions with num as the argument
  int even = is_even(num);
  int odd = is_odd(num);

  // Print the results
  if (even == 1) {
    printf("%d is an even number.\n", num);
  }
  
  if (odd == 1) {
    printf("%d is an odd number.\n", num);
  }

  return 0;
}
