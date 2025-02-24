#include <stdio.h>

int main() {
    float costPrice, discount, finalPrice;
    char isStudent;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent); 

    if (isStudent == 'y') {
        if (costPrice > 500)
            discount = 0.10;
        else
            discount = 0.05;
    } else {
        if (costPrice > 500)
            discount = 0.08;
        else
            discount = 0.02;
    }

    finalPrice = costPrice - (costPrice * discount);
    printf("Final Price after discount: %.2f\n", finalPrice);

    return 0;
}

