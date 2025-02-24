#include <stdio.h>
int i;
int findChar(char str[], char ch) {
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            return i;
    return -1;
}

int main() {
    char str[50], ch;

    printf("Enter string: ");
    gets(str);
    printf("Enter character to search: ");
    scanf("%c", &ch);

    int index = findChar(str, ch);
    if (index != -1)
        printf("Character found at index %d, ASCII: %d\n", index, ch);
    else
        printf("Character not found.\n");

    return 0;
}

