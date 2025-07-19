#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int numerator, denominator;

    printf("Enter a fraction (numerator/denominator): ");
    scanf("%d/%d", &numerator, &denominator);

    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    printf("Reduced fraction: %d/%d\n", numerator, denominator);
    return 0;
}

