#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee emp1 = {101, "John Doe", 50000.0};

    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}

