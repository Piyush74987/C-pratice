#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("file1.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    destination = fopen("file2.txt", "a");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("Content successfully appended from file1.txt to file2.txt\n");

    return 0;
}

