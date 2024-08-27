#include <stdio.h>

// Define the structure for complex numbers
typedef struct {
    float real;
    float imaginary;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

int main() {
    Complex number1, number2, sum, difference;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &number1.real, &number1.imaginary);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &number2.real, &number2.imaginary);

    // Perform addition and subtraction of complex numbers
    sum = addComplex(number1, number2);
    difference = subtractComplex(number1, number2);

    // Display the results
    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Difference of the complex numbers: %.2f + %.2fi\n", difference.real, difference.imaginary);

    return 0;
}
