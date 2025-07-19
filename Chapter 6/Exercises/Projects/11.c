#include <stdio.h>

int main() {
    int n;
    double e = 1.0;      // Starting value of e
    double factorial = 1.0;  // Initialize factorial

    printf("Enter an integer to approximate e: ");
    scanf("%d", &n);

    int i = 1;  // Initialization outside the loop
    while (i <= n) {
        factorial *= i;      // Calculate factorial
        e += 1.0 / factorial;  // Add the term to e
        i++;  // Increment inside the loop
    }

    printf("Approximation of e after %d terms: %.10f\n", n, e);

    return 0;
}

