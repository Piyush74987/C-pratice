#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) 
        scanf("%d", &arr[i]);

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < 5; i++) 
        printf("%d ", arr[i]);

    return 0;
}

