#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') i++; // Find end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated String: %s\n", str1);
    return 0;
}

