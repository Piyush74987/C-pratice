#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int mat1[10][10], mat2[10][10], res[10][10] = {0};

    printf("Enter rows and cols for first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &mat1[i][j]);

    printf("Enter rows and cols for second matrix: ");
    scanf("%d %d", &p, &q);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) 
        for (j = 0; j < q; j++) 
            scanf("%d", &mat2[i][j]);

    if (n != p) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    for (i = 0; i < m; i++) 
        for (j = 0; j < q; j++) 
            for (k = 0; k < n; k++) 
                res[i][j] += mat1[i][k] * mat2[k][j];

    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) 
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}

