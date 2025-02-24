#include <stdio.h>

struct Date {
    int dd, mm, yy;
};

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp = {101, "Alice", 60000.0};

    printf("Employee ID: %d\nName: %s\nSalary: %.2f\n",
           emp.id, emp.name, emp.salary);
    return 0;
}

