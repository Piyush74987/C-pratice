#include <stdio.h>

int main() {
    int i, j;

    for (i = 1, j = 5; i <= 5; i++, j--) {
        if (i == 3) continue; // Skip when i = 3
        printf("%d %d\n", i, j);
    }

    return 0;
}

