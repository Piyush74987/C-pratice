#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <base> <height>\n", argv[0]);
        return 1;
    }
    
    float base = atof(argv[1]);
    float height = atof(argv[2]);
    float area = 0.5 * base * height;
    
    printf("Area of Triangle: %.2f\n", area);
    return 0;
}

