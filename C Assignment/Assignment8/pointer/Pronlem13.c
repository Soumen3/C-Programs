#include <stdio.h>

// A function to concatenate two strings using pointers
void string_concat(char *s1, char *s2, char *s3) {
  // Loop through the first string using a pointer until the null character is reached
  while (*s1 != '\0') {
    // Copy the value pointed by the first pointer to the third pointer
    *s3 = *s1;
    // Increment both pointers
    s1++;
    s3++;
  }
  // Loop through the second string using a pointer until the null character is reached
  while (*s2 != '\0') {
    // Copy the value pointed by the second pointer to the third pointer
    *s3 = *s2;
    // Increment both pointers
    s2++;
    s3++;
  }
  // Add a null character at the end of the third string
  *s3 = '\0';
}

// A main function to test the string_concat function
int main() {
  // Declare three string variables
  char str1[100];
  char str2[100];
  char str3[200];

  // Read two strings from the user
  printf("Enter the first string: ");
  scanf("%s", str1);
  printf("Enter the second string: ");
  scanf("%s", str2);

  // Call the string_concat function with the three strings as arguments
  string_concat(str1, str2, str3);

  // Print the result
  printf("The concatenated string is: %s\n", str3);

  return(0);
}
