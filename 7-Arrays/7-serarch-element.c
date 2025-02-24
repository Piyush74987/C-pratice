#include <stdio.h>

int main() {
    int arr[5], i, key, found = -1;

    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) 
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}

