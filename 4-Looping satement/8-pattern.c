#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Change for more rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows) 
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

