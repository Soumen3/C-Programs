#include <stdio.h>

// User-defined function for addition
int add(int a, int b) {
    return a + b;
}

// User-defined function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// User-defined function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// User-defined function for division
float divide(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0; // Return 0 in case of division by zero
    } else {
        return (float)a / b; // Return the division result
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations using user-defined functions
    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));

    return 0;
}
