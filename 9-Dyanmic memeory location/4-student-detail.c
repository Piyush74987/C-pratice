#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    printf("Enter student name: ");
    scanf(" %[^\n]", s->name);
    
    printf("Enter age: ");
    scanf("%d", &s->age);
    
    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", s->name, s->age, s->marks);

    free(s); // Free allocated memory
    return 0;
}

