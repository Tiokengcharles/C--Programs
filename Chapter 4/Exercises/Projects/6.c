#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, total, check_digit;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d1, &d2, &d3, &d4, &d5, &d6,
          &d7, &d8, &d9, &d10, &d11, &d12);

    int even_sum = d2 + d4 + d6 + d8 + d10 + d12;
    int odd_sum = d1 + d3 + d5 + d7 + d9 + d11;

    total = odd_sum + 3 * even_sum;
    total -= 1;
    check_digit = 9 - (total % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}
