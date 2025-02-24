#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    char temp[50][50];
    int i = 0, j = 0, k = 0 ,m=0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            temp[k][j] = '\0';
            k++;
            j = 0;
        } else {
            temp[k][j++] = str[i];
        }
    }
    temp[k][j] = '\0';

    for (m= k; m >= 0; m--)
        printf("%s ", temp[m]);
}

int main() {
    char str[50];

    printf("Enter a sentence: ");
    gets(str);

    printf("Reversed Words: ");
    reverseWords(str);

    return 0;
}

