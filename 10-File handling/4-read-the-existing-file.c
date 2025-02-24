#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Hello, this is a test message written using fprintf().\n");
    fclose(file);

    printf("Data successfully written to output.txt\n");

    return 0;
}

