#include <stdio.h>

int main() {
    double d = 3.1415;
    int i = 10;
    char c = 'A';

    // Pointers to each variable
    double *ptr_d = &d;
    int *ptr_i = &i;
    char *ptr_c = &c;

    // Printing addresses and values
    printf("Double: Address = %p, Value = %.4f\n", ptr_d, *ptr_d);
    printf("Integer: Address = %p, Value = %d\n", ptr_i, *ptr_i);
    printf("Char: Address = %p, Value = %c\n", ptr_c, *ptr_c);

    return 0;
}


