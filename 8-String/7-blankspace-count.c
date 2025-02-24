#include <stdio.h>
int i;
int countSpaces(char str[]) {
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ') count++;
    return count;
}

int main() {
    char str[100];
    printf("Enter a paragraph: ");
    gets(str);

    printf("No. of spaces: %d\n", countSpaces(str));
    return 0;
}

