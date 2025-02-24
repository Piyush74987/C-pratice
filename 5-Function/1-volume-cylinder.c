#include <stdio.h>

// a) Function without parameters, without return value
void volume1() {
    float r = 5, h = 10;
    printf("Volume (No Params, No Return): %.2f\n", 3.14 * r * r * h);
}

// b) Function with parameters, without return value
void volume2(float r, float h) {
    printf("Volume (With Params, No Return): %.2f\n", 3.14 * r * r * h);
}

// c) Function without parameters, with return value
float volume3() {
    float r = 6, h = 12;
    return 3.14 * r * r * h;
}

// d) Function with parameters, with return value
float volume4(float r, float h) {
    return 3.14 * r * r * h;
}

int main() {
    volume1();
    volume2(4, 8);
    printf("Volume (No Params, With Return): %.2f\n", volume3());
    printf("Volume (With Params, With Return): %.2f\n", volume4(7, 14));

    return 0;
}

