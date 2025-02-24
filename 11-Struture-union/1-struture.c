#include <stdio.h>

#define STUDENT_COUNT 10

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[STUDENT_COUNT];
    int i;

    // Accept student details
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------\n");
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("%-10d %-20s %-10.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}

