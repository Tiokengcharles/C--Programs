#include <stdio.h>

int main(void) {
    double n, sum = 0.0;

    printf("This program sums a series of double values.\n");
    printf("Enter numbers (0 to terminate): ");

    do {
        scanf("%lf", &n);
        sum += n;
    } while (n != 0.0);

    printf("Sum: %.2f\n", sum);

    return 0;
}

