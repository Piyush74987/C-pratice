#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to display employee details (Pass by value)
void displayEmployee(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", emp.id, emp.name, emp.salary);
}

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Function call
    displayEmployee(emp);

    return 0;
}

