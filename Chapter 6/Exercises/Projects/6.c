#include <stdio.h>

int main() {
    int n, square;

    n = 1;

    while (n <= 10) {
        square = n * n; 
        printf("The square of %d is %d\n", n, square);
        n++; 
    }

    return 0;
}

