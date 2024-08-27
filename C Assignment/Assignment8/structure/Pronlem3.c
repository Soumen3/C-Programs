#include <stdio.h>

// Structure definition for student details
struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float avgMarks;
};

// Function to display student details
void displayStudentDetails(struct Student students[], int numStudents) {
    printf("Student Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].avgMarks);
        printf("------------------------------\n");
    }
}

int main() {
    struct Student bctStudents[12];

    printf("Enter details of 12 BCT students:\n");
    for (int i = 0; i < 12; i++) {
        printf("Enter Roll No for Student %d: ", i + 1);
        scanf("%d", &bctStudents[i].rollNo);

        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", bctStudents[i].name);

        printf("Enter Address for Student %d: ", i + 1);
        scanf("%s", bctStudents[i].address);

        printf("Enter Age for Student %d: ", i + 1);
        scanf("%d", &bctStudents[i].age);

        printf("Enter Average Marks for Student %d: ", i + 1);
        scanf("%f", &bctStudents[i].avgMarks);
    }

    displayStudentDetails(bctStudents, 12); // Display the student details

    return 0;
}
