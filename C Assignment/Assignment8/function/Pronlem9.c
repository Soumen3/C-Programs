#include <stdio.h>
#include <math.h>

// A function to check if a number is prime
int is_prime(int n) {
  // Return 0 if n is less than 2
  if (n < 2) {
    return 0;
  }

  // Check if n is divisible by any number from 2 to sqrt(n)
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  // Return 1 if n is not divisible by any number
  return 1;
}

// A function to check if a number is Armstrong
int is_armstrong(int n) {
  // Declare variables to store the sum and the number of digits
  int sum = 0;
  int digits = 0;

  // Find the number of digits in n
  int temp = n;
  while (temp > 0) {
    digits++;
    temp /= 10;
  }

  // Find the sum of the power of digits in n
  temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    sum += pow(digit, digits);
    temp /= 10;
  }

  // Return 1 if the sum is equal to n, otherwise return 0
  if (sum == n) {
    return 1;
  } else {
    return 0;
  }
}

// A function to check if a number is perfect
int is_perfect(int n) {
  // Declare a variable to store the sum of factors
  int sum = 0;

  // Find the sum of factors of n
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  // Return 1 if the sum is equal to n, otherwise return 0
  if (sum == n) {
    return 1;
  } else {
    return 0;
  }
}

// A main function to test the is_prime, is_armstrong and is_perfect functions
int main() {
  
   // Declare a variable to store the number
   int num;

   // Read a number from the user
   printf("Enter a number: ");
   scanf("%d", &num);

   // Call the is_prime, is_armstrong and is_perfect functions with num as the argument
   int prime = is_prime(num);
   int armstrong = is_armstrong(num);
   int perfect = is_perfect(num);

   // Print the results
   if (prime == 1) {
     printf("%d is a prime number.\n", num);
   } else {
     printf("%d is not a prime number.\n", num);
   }

   if (armstrong == 1) {
     printf("%d is an Armstrong number.\n", num);
   } else {
     printf("%d is not an Armstrong number.\n", num);
   }

   if (perfect ==1 ) {
     printf("%d is a perfect number.\n", num);
   } else {
     printf("%d is not a perfect number.\n", num);
   }

   return(0);
}
