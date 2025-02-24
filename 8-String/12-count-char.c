#include <stdio.h>

void countCharacters(char str[]) {
    int letters = 0, digits = 0, spaces = 0, special = 0, i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            letters++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] == ' ')
            spaces++;
        else
            special++;
        i++;
    }

    printf("Letters: %d\nDigits: %d\nSpaces: %d\nSpecial Characters: %d\n", letters, digits, spaces, special);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    countCharacters(str);

    return 0;
}

