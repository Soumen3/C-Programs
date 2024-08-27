#include <stdio.h>
#include <dirent.h>

int main() {
    struct dirent *entry;
    DIR *dp;

    char path[100];  // Specify the path of the directory you want to list

    printf("Enter directory path: ");
    scanf("%s", path);

    dp = opendir(path);

    if (dp == NULL) {
        printf("Error opening the directory.\n");
        return 1;
    }

    printf("Files and sub-directories in '%s' directory:\n", path);

    while ((entry = readdir(dp))) {
        printf("%s\n", entry->d_name);
    }

    closedir(dp);

    return 0;
}
