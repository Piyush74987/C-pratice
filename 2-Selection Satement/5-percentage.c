#include <stdio.h>

int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage > 70)
        printf("Grade: A\n");
    else if (percentage >= 60)
        printf("Grade: B+\n");
    else if (percentage >= 45)
        printf("Grade: B\n");
    else if (percentage >= 35)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}

