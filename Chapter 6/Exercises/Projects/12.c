#include <stdio.h>

int main() {
    double sum = 0.0;
    double term;
    double e = 0.0001;  // Small threshold
    int n = 0;

    do {
        term = 1.0;  // Reset term for the current n

        // Replace for-loop with while-loop:
        int i = 1;  // Initialization outside loop
        while (i <= n) {
            term /= i;  // Calculate the term 1/n!
            i++;        // Increment inside loop
        }

        sum += term;  // Add term to sum
        n++;          // Increment n
    } while (term >= e);  // Continue while term >= e

    printf("Sum approximating e: %.10f\n", sum);
    return 0;
}

