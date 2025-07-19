#include <stdio.h>

int main() {
    int n = 1;  // Initialization outside the loop

    while (n <= 10) {
        int square = n * n;
        printf("The square of %d is %d\n", n, square);
        n++;  // Increment inside the loop
    }

    return 0;
}

