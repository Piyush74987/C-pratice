#include <stdio.h>
#include <stdlib.h>

int main() {
    char *text;
    int size;

    printf("Enter size of text: ");
    scanf("%d", &size);

    // Allocate memory
    text = (char *)malloc((size + 1) * sizeof(char));

    if (text == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text); // Read string with spaces

    printf("Entered Text: %s\n", text);

    free(text); // Free allocated memory
    return 0;
}

