#include <stdio.h>

// A function to reverse an array using pointers
void reverse_array(int *arr, int size) {
  // Declare two pointers to point to the start and end of the array
  int *start = arr;
  int *end = arr + size - 1;

  // Swap the values pointed by the pointers until they meet or cross
  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

// A main function to test the reverse_array function
int main() {
  // Declare an array of integers
  int a[] = {10, 20, 30, 40, 50};

  // Find the size of the array
  int n = sizeof(a) / sizeof(a[0]);

  // Print the array before reversing
  printf("The array before reversing is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  // Call the reverse_array function with the array and its size as arguments
  reverse_array(a, n);

  // Print the array after reversing
  printf("The array after reversing is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return(0);
}
