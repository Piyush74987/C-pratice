#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *students;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for n students
    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\nAge: %d\nMarks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }

    free(students); // Free allocated memory
    return 0;
}

