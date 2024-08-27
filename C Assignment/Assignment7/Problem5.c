#include <stdio.h>

int main() {
    int decimalNumber, i = 0;
    int binaryNumber[32]; // Assuming a maximum 32-bit binary number

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Please enter a non-negative decimal number.");
        return 1;
    }

    // Convert decimal to binary
    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    if (i == 0) {
        binaryNumber[i] = 0; // For the case when the input number is 0
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }

    return 0;
}

