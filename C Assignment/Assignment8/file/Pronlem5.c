#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char filename1[100], filename2[100], filename3[100];
    char c;

    printf("Enter the first file name: ");
    scanf("%s", filename1);

    printf("Enter the second file name: ");
    scanf("%s", filename2);

    printf("Enter the third file name to store the merged content: ");
    scanf("%s", filename3);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    file3 = fopen(filename3, "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Error opening the file(s).\n");
        return 1;
    }

    while ((c = fgetc(file1)) != EOF) {
        fputc(c, file3);
    }

    while ((c = fgetc(file2)) != EOF) {
        fputc(c, file3);
    }

    printf("Files merged successfully into '%s'.\n", filename3);

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
