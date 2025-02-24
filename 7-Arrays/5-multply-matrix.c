#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], res[3][3] = {0}, i, j, k;

    printf("Enter first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) 
            scanf("%d", &mat1[i][j]);

    printf("Enter second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) 
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) 
            for (k = 0; k < 3; k++) 
                res[i][j] += mat1[i][k] * mat2[k][j];

    printf("Result Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}

