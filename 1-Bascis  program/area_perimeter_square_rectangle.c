#include <stdio.h>
int main() {
    float side, length, breadth;
    
    // Square
    printf("Enter side of the square: ");
    scanf("%f", &side);
    printf("Square - Area: %.2f, Perimeter: %.2f\n", side * side, 4 * side);
    
    // Rectangle
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", length * breadth, 2 * (length + breadth));
    
    return 0;
}

