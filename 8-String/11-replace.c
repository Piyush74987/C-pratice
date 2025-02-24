#include <stdio.h>
int i ;
void transformString(char str[]) {
    for (i= 0; str[i] != '\0'; i++)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] += 1;
}

int main() {
    char str[50];

    printf("Enter string: ");
    gets(str);

    transformString(str);
    printf("Transformed String: %s\n", str);
    
    return 0;
}

