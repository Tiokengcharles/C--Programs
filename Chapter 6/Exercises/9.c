#include <stdio.h>

int main() {
    int i = 10;  // Initialization (the "one statement in addition")

    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
    }

    return 0;
}

