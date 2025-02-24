#include <stdio.h>

int main() {
    FILE *file = fopen("students.txt", "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n,i;
    printf("Enter number of students to add: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        char name[50];
        int marks;
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", name, &marks);
        fprintf(file, "%s %d\n", name, marks);
    }

    fclose(file);
    printf("Data successfully appended to file.\n");

    return 0;
}

