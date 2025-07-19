#include <stdio.h>
#include <math.h>

int main() {
    double x, y, prev;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y = 1.0;
    do {
        prev = y;
        y = (y + x / y) / 2.0;
    } while (fabs(y - prev) > 0.00001 * y);

    printf("Square root: %.5f\n", y);
    return 0;
}

