#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d: %d\n", n, fact);
    return 0;
}

