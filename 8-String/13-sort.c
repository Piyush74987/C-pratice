#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char str[], int n) {
    int i, j;
    char temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *str;
    int len;

    printf("Enter length of string: ");
    scanf("%d", &len);

    // Allocate memory dynamically
    str = (char *)malloc((len + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter string: ");
    scanf(" %[^\n]", str); // Read string including spaces

    bubbleSort(str, strlen(str));

    printf("Sorted String: %s\n", str);

    // Free allocated memory
    free(str);

    return 0;
}

