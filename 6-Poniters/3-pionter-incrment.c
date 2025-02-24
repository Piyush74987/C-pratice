#include <stdio.h>

int main() {
    int a = 100;
    int *ptr = &a;  // Pointer assigned to address of a

    printf("Original Address: %p\n", ptr);
    
    ptr = ptr + 2;  // Increment pointer by 2

    printf("New Address after ptr + 2: %p\n", ptr);

    return 0;
}

