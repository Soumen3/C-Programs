#include <stdio.h>

// A function to input array elements using a pointer
void input_array(int *arr, int size) {
  // Loop through the array using a pointer
  for (int i = 0; i < size; i++) {
    // Read an element from the user and store it in the location pointed by the pointer
    printf("Enter element %d: ", i + 1);
    scanf("%d", arr + i);
  }
}

// A function to print array elements using a pointer
void print_array(int *arr, int size) {
  // Loop through the array using a pointer
  for (int i = 0; i < size; i++) {
    // Print the value pointed by the pointer
    printf("%d ", *(arr + i));
  }
  printf("\n");
}

// A main function to test the input_array and print_array functions
int main() {
  // Declare an array of integers
  int a[10];

  // Find the size of the array
  int n = sizeof(a) / sizeof(a[0]);

  // Call the input_array function with the array and its size as arguments
  input_array(a, n);

  // Print the array elements
  printf("The array elements are: ");
  print_array(a, n);

  return 0;
}
