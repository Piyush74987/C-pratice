#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    int i;

    // Accept employee details
    for (i = 0; i < 5; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display employee details
    printf("\n%-10s %-20s %-10s\n", "ID", "Name", "Salary");
    printf("---------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}

