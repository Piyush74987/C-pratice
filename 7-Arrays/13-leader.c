#include <stdio.h>

int main() {
    int arr[5], i, max_right;
    
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) 
        scanf("%d", &arr[i]);

    max_right = arr[4];
    printf("Leaders: %d ", max_right);

    for (i = 3; i >= 0; i--) {
        if (arr[i] > max_right) {
            max_right = arr[i];
            printf("%d ", max_right);
        }
    }

    return 0;
}

