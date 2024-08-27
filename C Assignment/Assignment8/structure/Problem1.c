#include <stdio.h>

// Structure definition
struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct company cmp; // Declaring a structure variable

    // Input company details
    printf("Enter company name: ");
    scanf("%s", cmp.name);

    printf("Enter company address: ");
    scanf("%s", cmp.address);

    printf("Enter company phone: ");
    scanf("%s", cmp.phone);

    printf("Enter number of employees: ");
    scanf("%d", &cmp.noOfEmployee);

    // Displaying company details
    printf("\nCompany Details:\n");
    printf("Name: %s\n", cmp.name);
    printf("Address: %s\n", cmp.address);
    printf("Phone: %s\n", cmp.phone);
    printf("Number of Employees: %d\n", cmp.noOfEmployee);

    return 0;
}
