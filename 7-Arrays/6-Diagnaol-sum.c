#include <stdio.h>

int main() {
    int mat[3][3], sum = 0, i,j;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) 
            scanf("%d", &mat[i][j]);

    for (i = 0; i < 3; i++) 
        sum += mat[i][i];

    printf("Sum of Diagonal Elements: %d\n", sum);
    
    return 0;
}

