#include <stdio.h>
int i;
void convertAlternate(char str[]) {
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main() {
    char str[50];

    printf("Enter string: ");
    gets(str);

    convertAlternate(str);
    printf("Modified String: %s\n", str);
    
    return 0;
}

