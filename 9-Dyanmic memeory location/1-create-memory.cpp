#include <stdio.h>
#include <stdlib.h>

int main() {
    int *intPtr;
    char *charPtr;
    float *floatPtr;

    // Allocating memory dynamically
    intPtr = (int *)malloc(sizeof(int));
    charPtr = (char *)malloc(sizeof(char));
    floatPtr = (float *)malloc(sizeof(float));

    if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", intPtr);
    
    printf("Enter a character: ");
    scanf(" %c", charPtr); // Space before %c to avoid newline issue

    printf("Enter a float: ");
    scanf("%f", floatPtr);

    // Displaying values
    printf("Integer: %d\n", *intPtr);
    printf("Character: %c\n", *charPtr);
    printf("Float: %.2f\n", *floatPtr);

    // Freeing allocated memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}

