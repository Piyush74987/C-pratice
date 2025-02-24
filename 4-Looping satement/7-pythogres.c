#include <stdio.h>

int main() {
    int limit, a, b, c;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Pythagorean Triplets below %d are:\n", limit);
    for (a = 1; a <= limit; a++) {
        for (b = a; b <= limit; b++) {
            for (c = b; c <= limit; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
    
    return 0;
}

