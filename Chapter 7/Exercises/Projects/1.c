#include <stdio.h>
#include <limits.h>

int main(void) {
    int i;
    for (i = 0; i <= 50000; i++) {
        int square = i * i;
        if (square < 0) {
            printf("Overflow detected at i = %d\n", i);
            break;
        }
    }
    return 0;
}

