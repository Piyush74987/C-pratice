#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("outputs.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(input)) != EOF) {
        if (ch != ' ') {
            fputc(ch, output);
        }
    }

    fclose(input);
    fclose(output);
    printf("Spaces removed successfully.\n");

    return 0;
}

