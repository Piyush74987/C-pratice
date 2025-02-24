#include <stdio.h>
int i;
int isVowel(char ch) {
    char vowels[] = "aeiouAEIOU";
    for (i= 0; vowels[i] != '\0'; i++)
        if (ch == vowels[i]) return 1;
    return 0;
}

int main() {
    char str[50], newStr[50];
    int i, j = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';

    printf("String without vowels: %s\n", newStr);
    return 0;
}

