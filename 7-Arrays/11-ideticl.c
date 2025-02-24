#include <stdio.h>

int main() {
    int m, n, i, j, identical = 1;
    int mat1[10][10], mat2[10][10];

    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            if (mat1[i][j] != mat2[i][j]) 
                identical = 0;

    if (identical) 
        printf("Matrices are identical\n");
    else 
        printf("Matrices are not identical\n");

    return 0;
}

