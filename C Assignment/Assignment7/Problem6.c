#include <stdio.h>

int main() {
    int binaryNumber[100]; // Assuming a maximum array size of 100
    int length, decimalNumber = 0;

    printf("Enter the length of the binary number: ");
    scanf("%d", &length);

    if (length <= 0 || length > 100) {
        printf("Invalid length for the binary number.");
        return 1;
    }

    printf("Enter the binary number (enter each digit separated by a space): \n");

    // Reading the binary number into an array
    for (int i = 0; i < length; i++) {
        scanf("%d", &binaryNumber[i]);
        if (binaryNumber[i] != 0 && binaryNumber[i] != 1) {
            printf("Invalid binary digit. Enter only 0s and 1s.\n");
            return 1;
        }
    }

    // Converting binary to decimal
    for (int i = length - 1, power = 0; i >= 0; i--, power++) {
        decimalNumber += binaryNumber[i] << power;
    }

    printf("Decimal representation: %d\n", decimalNumber);

    return 0;
}
