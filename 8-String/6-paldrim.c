#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    printf("Enter string: ");
    gets(str);

    strcpy(rev, str);
    strrev(rev);

    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

