#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum of elements: %d\n", sum);

    free(arr); // Free allocated memory
    return 0;
}

