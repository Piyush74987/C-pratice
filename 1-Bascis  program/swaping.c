#include <stdio.h>
int main() {
    int x, y, temp;
    
    // With Third Variable
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping (With third variable): x = %d, y = %d\n", x, y);
    
    // Without Third Variable
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping (Without third variable): x = %d, y = %d\n", x, y);
    
    return 0;
}

