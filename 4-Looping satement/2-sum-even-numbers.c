#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; // Extract last digit
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10; // Remove last digit
    }

    printf("Sum of even digits: %d\n", sum);
    return 0;
}

