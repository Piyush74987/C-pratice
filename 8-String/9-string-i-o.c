#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter string using `gets()`: ");
    gets(str);
    printf("You entered: %s\n", str);
    
    printf("Enter string using `scanf()`: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);

    return 0;
}

