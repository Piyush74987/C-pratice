#include <stdio.h>

int main() {
    int m, n, i, j;
    int mat1[10][10], mat2[10][10], sum[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &mat2[i][j]);

    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

