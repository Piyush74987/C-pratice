#include <stdio.h>
int i;
void convertCase(char str[]) {
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

int main() {
    char str[50];

    printf("Enter string: ");
    gets(str);

    convertCase(str);
    printf("Converted String: %s\n", str);

    return 0;
}

