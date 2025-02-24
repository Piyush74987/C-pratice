#include <stdio.h>

// Function to find HCF using recursion
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

// Function to find LCM using HCF
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}

