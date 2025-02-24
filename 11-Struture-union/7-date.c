#include <stdio.h>

struct Date {
    int dd, mm, yy;
};

int main() {
    struct Date today;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &today.dd, &today.mm, &today.yy);

    printf("Entered Date: %02d-%02d-%d\n", today.dd, today.mm, today.yy);
    
    return 0;
}

