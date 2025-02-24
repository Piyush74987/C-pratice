#include <stdio.h>

int main() {
    int marks[10], sum = 0;
    float average;

    printf("Enter marks of 10 students:\n");
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 10.0;
    printf("Average Marks: %.2f\n", average);

    return 0;
}

