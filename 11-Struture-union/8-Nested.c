#include <stdio.h>

struct Date {
    int dd, mm, yy;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joining_date; // Nested structure
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joining_date.dd, &emp.joining_date.mm, &emp.joining_date.yy);

    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nJoining Date: %02d-%02d-%d\n", 
            emp.id, emp.name, emp.salary, emp.joining_date.dd, emp.joining_date.mm, emp.joining_date.yy);

    return 0;
}

