#include <stdio.h>

// Function to add two float numbers using call by address
void add(float *num1, float *num2, float *result) {
    *result = *num1 + *num2;
}

int main() {
    float a, b, sum;

    // Input numbers
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);

    // Function call by address
    add(&a, &b, &sum);

    // Display result
    printf("Sum = %.2f\n", sum);

    return 0;
}

