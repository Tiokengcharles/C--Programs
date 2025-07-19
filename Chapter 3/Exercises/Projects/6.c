#include <stdio.h>

int main(void) {
    int numerator1, denominator1;
    int numerator2, denominator2;

    printf("Enter the first fraction (e.g., 3 / 4): ");
    scanf("%d %*[^0-9] %d", &numerator1, &denominator1);

    printf("Enter the second fraction (e.g., 5 / 6): ");
    scanf("%d %*[^0-9] %d", &numerator2, &denominator2);

    int resultNumerator = (numerator1 * denominator2) + (numerator2 * denominator1);
    int resultDenominator = denominator1 * denominator2;

    printf("The sum of the fractions is: %d/%d\n", resultNumerator, resultDenominator);

