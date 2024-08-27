#include <stdio.h>

// Structure definition for employee details
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    struct Employee emp; // Declaring a structure variable

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Displaying employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeID);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
