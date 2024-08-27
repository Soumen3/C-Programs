#include <stdio.h>
#include <string.h>

// A function to find the 3rd element of a string
char find_third(char *str) {
  // Check if the string has at least 3 characters
  if (strlen(str) >= 3) {
    // Return the 3rd character
    return str[2];
  } else {
    // Return a null character
    return '\0';
  }
}

// A main function to test the find_third function
int main() {
  // Declare a string variable
  char s[100];

  // Read a string from the user
  printf("Enter a string: ");
  scanf("%s", s);

  // Find the 3rd element of the string
  char third = find_third(s);

  // Print the result
  if (third != '\0') {
    printf("The 3rd element of the string is: %c\n", third);
  } else {
    printf("The string does not have a 3rd element.\n");
  }

  return 0;
}
