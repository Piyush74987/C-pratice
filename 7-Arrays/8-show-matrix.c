#include <stdio.h>
int i,j;

void inputMatrix(int mat[10][10], int rows, int cols) {
    printf("Enter elements of matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) 
        for (j = 0; j < cols; j++) 
            scanf("%d", &mat[i][j]);
}

void displayMatrix(int mat[10][10], int rows, int cols) {
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) 
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int m, n, p, q;
    int mat1[10][10], mat2[10][10];

    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &m, &n);
    inputMatrix(mat1, m, n);
    
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &p, &q);
    inputMatrix(mat2, p, q);

    displayMatrix(mat1, m, n);
    displayMatrix(mat2, p, q);

    return 0;
}

