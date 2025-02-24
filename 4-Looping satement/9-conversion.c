#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32], i = 0;
    
    // Edge case: If number is 0
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (num > 0) {
        binary[i++] = num % 2;  // Store remainder
        num /= 2;               // Divide by 2
    }

    printf("Binary: ");
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);  // Print in reverse order
    }
    printf("\n");
}

// Function to convert binary to octal
void binaryToOctal(long long binary) {
    int decimal = 0, octal = 0, base = 1, remainder, i = 1;

    // Convert Binary to Decimal
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    // Convert Decimal to Octal
    base = 1;
    while (decimal > 0) {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal: %d\n", octal);
}

int main() {
    int choice, decimal;
    long long binary;

    printf("Choose conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Octal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        binaryToOctal(binary);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

