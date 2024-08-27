#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char c;

    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFilename);

    sourceFile = fopen(sourceFilename, "r");
    destinationFile = fopen(destinationFilename, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening the file(s).\n");
        return 1;
    }

    while ((c = fgetc(sourceFile)) != EOF) {
        fputc(c, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
