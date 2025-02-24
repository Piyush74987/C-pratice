#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    // Accepting input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to consume newline character

    // Switch case for arithmetic operations
    switch (operator) {
        case '+':
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice! Please enter +, -, *, or /.\n");
    }

    return 0;
}

