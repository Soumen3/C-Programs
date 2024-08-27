#include <stdio.h>

// A function to copy one string to another using a pointer
void string_copy(char *source, char *target) {
  // Loop through the source string using a pointer until the null character is reached
  while (*source != '\0') {
    // Copy the value pointed by the source pointer to the target pointer
    *target = *source;
    // Increment both pointers
    source++;
    target++;
  }
  // Add a null character at the end of the target string
  *target = '\0';
}

// A main function to test the string_copy function
int main() {
  // Declare two string variables
  char s1[100];
  char s2[100];

  // Read a string from the user
  printf("Enter a string: ");
  scanf("%s", s1);

  // Call the string_copy function with the source and target strings as arguments
  string_copy(s1, s2);

  // Print the result
  printf("The copied string is: %s\n", s2);

  return(0);
}
