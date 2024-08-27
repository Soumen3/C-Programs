#include <stdio.h>

// A function to multiply two 2 X 2 matrices using pointers
void multiply_matrix(int (*a)[2], int (*b)[2], int (*c)[2]) {
  // Loop through the rows and columns of the matrices using pointers
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      // Initialize the result element to zero
      *(*(c + i) + j) = 0;
      // Calculate the dot product of the corresponding row and column
      for (int k = 0; k < 2; k++) {
        *(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
      }
    }
  }
}

// A function to print a 2 X 2 matrix using a pointer
void print_matrix(int (*m)[2]) {
  // Loop through the rows and columns of the matrix using a pointer
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      // Print the value pointed by the pointer
      printf("%d ", *(*(m + i) + j));
    }
    printf("\n");
  }
}

// A main function to test the multiply_matrix and print_matrix functions
int main() {
  // Declare two arrays of integers to store the matrices
  int x[2][2] = {{1, 2}, {3, 4}};
  int y[2][2] = {{5, 6}, {7, 8}};

  // Declare an array of integers to store the result matrix
  int z[2][2];

  // Call the multiply_matrix function with the matrices and their size as arguments
  multiply_matrix(x, y, z);

  // Print the matrices
  printf("The first matrix is:\n");
  print_matrix(x);

  printf("The second matrix is:\n");
  print_matrix(y);

  printf("The product of the matrices is:\n");
  print_matrix(z);

  return(0);
}
