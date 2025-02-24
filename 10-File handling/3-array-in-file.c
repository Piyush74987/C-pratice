#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file = fopen("students_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n,i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
        fprintf(file, "%s %d\n", students[i].name, students[i].marks);
    }
    fclose(file);

    // Read the file
    file = fopen("students_data.txt", "r");
    printf("\nReading from file:\n");
    while (fscanf(file, "%s %d", students[0].name, &students[0].marks) != EOF) {
        printf("Name: %s, Marks: %d\n", students[0].name, students[0].marks);
    }
    fclose(file);

    return 0;
}

