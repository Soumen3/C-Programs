#include <stdio.h>

// A recursive function to print the reverse of a number
void print_reverse(int n) {
  // Base case: if n is 0, return
  if (n == 0) {
    return;
  } else {
    // Recursive case: print the last digit and call the function with the remaining number
    printf("%d", n % 10);
    print_reverse(n / 10);
  }
}

// A main function to test the print_reverse function
int main() {
  // Declare a variable to store the number
  int num;

  // Read a number from the user
  printf("Enter a number: ");
  scanf("%d", &num);

  // Print the reverse of the number
  printf("The reverse of %d is: ", num);
  print_reverse(num);
  printf("\n");

  return 0;
}
