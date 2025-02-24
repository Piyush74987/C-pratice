#include <stdio.h>

int main() {
    int choice, num, year;

    printf("Menu:\n");
    printf("1. Find Square and Cube of a number\n");
    printf("2. Check if a year is a Leap Year or not\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Square of %d is %d\n", num, num * num);
            printf("Cube of %d is %d\n", num, num * num * num);
            break;

        case 2:
            printf("Enter a year: ");
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0))
                printf("%d is a Leap Year.\n", year);
            else
                printf("%d is NOT a Leap Year.\n", year);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

