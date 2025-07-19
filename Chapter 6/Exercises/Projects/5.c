#include <stdio.h>

int main() {
    int i = 10;  // Initialization outside the loop

    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
    }

    printf("\n");

    return 0;
}

