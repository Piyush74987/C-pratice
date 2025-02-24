#include <stdio.h>
#include <string.h>

union Data {
    int int_val;
    float float_val;
    char str[20];
};

int main() {
    union Data data;

    printf("Size of union: %lu bytes\n", sizeof(data));

    data.int_val = 10;
    printf("Integer Value: %d\n", data.int_val);

    data.float_val = 20.5;
    printf("Float Value: %.2f\n", data.float_val);

    strcpy(data.str, "Hello");
    printf("String Value: %s\n", data.str);

    return 0;
}

