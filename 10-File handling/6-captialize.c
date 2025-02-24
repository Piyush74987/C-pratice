#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("text.txt", "r+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    int capitalize = 1;

    while ((ch = fgetc(file)) != EOF) {
        if (capitalize && isalpha(ch)) {
            fseek(file, -1, SEEK_CUR);
            fputc(toupper(ch), file);
            capitalize = 0;
        }
        if (ch == ' ') {
            capitalize = 1;
        }
    }

    fclose(file);
    printf("First letter of every word capitalized.\n");

    return 0;
}

