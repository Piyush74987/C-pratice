#include <stdio.h>

// Function to find GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, num3, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find GCD of three numbers
    result = gcd(num1, gcd(num2, num3));

    printf("GCD of %d, %d, and %d is: %d\n", num1, num2, num3, result);
    return 0;
}

