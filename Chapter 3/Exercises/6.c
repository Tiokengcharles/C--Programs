#include <stdio.h>

int main(void) {
    int numerator, denominator;

    printf("Enter a fraction (e.g., 3 / 4): ");
    
    scanf("%d %*[^0-9] %d", &numerator, &denominator);

    printf("You entered: %d/%d\n", numerator, denominator);

    return 0;
}

