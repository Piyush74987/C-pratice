#include <stdio.h>

int main() {
    FILE *file = fopen("code.c", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int lines = 0, blankLines = 0, comments = 0;
    char ch, prev = '\n';

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
            if (prev == '\n') blankLines++;
        }
        if (prev == '/' && ch == '/') comments++;
        prev = ch;
    }

    fclose(file);
    printf("Total Lines: %d\nBlank Lines: %d\nComments: %d\n", lines, blankLines, comments);

    return 0;
}

