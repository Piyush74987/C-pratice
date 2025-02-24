#include <stdio.h>
#include <string.h>

struct Address {
    char city[20];
    int pin;
};

struct Employee {
    int id;
    char name[50];
    struct Address addr;
};

int main() {
    struct Employee emp1 = {101, "John", {"New York", 12345}};
    struct Employee emp2;

    emp2 = emp1;  // Copying structure

    printf("Copied Employee Details:\n");
    printf("ID: %d\nName: %s\nCity: %s\nPincode: %d\n", emp2.id, emp2.name, emp2.addr.city, emp2.addr.pin);

    return 0;
}

