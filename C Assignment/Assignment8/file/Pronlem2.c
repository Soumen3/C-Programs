#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char c;
    int count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while ((c = getc(file)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    fclose(file);

    printf("The file '%s' has %d lines.\n", filename, count);

    return 0;
}
