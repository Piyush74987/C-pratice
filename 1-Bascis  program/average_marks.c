#include <stdio.h>
int main() {
    float marks[5], total = 0, avg;
    int i;
    printf("Enter marks of five subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    avg = total / 5;
    printf("Total Marks: %.2f\nAverage Marks: %.2f\n", total, avg);
    return 0;
}

