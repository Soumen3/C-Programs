#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character from the input
    str[strcspn(str, "\n")] = '\0';

    // Using strrev to reverse the string
    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
