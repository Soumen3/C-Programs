#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin); // Reading string including spaces
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin); // Reading string including spaces

    // Remove newline character from fgets
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    // Concatenating str1 and str2
    strcpy(str3, str1); // Copy str1 into str3
    strcat(str3, str2); // Concatenate str2 to str3

    printf("Concatenated string is: %s\n", str3);
    return 0;
}