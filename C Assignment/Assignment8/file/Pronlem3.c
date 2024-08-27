#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char c;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Contents of the file '%s':\n", filename);

    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    fclose(file);

    return 0;
}
