#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare arrays to store marks for Mathematics and English for 'n' students
    int mathMarks[n];
    int engMarks[n];

    // Input marks for each student
    for (i = 0; i < n; i++) {
        printf("Enter Mathematics marks for student %d: ", i + 1);
        scanf("%d", &mathMarks[i]);

        printf("Enter English marks for student %d: ", i + 1);
        scanf("%d", &engMarks[i]);
    }

    printf("\nTotal marks of the students:\n");

    // Print total marks of each student
    for (i = 0; i < n; i++) {
        int totalMarks = mathMarks[i] + engMarks[i];
        printf("Student %d - Total Marks: %d\n", i + 1, totalMarks);
    }

    return 0;
}

