#include <stdio.h>

int main(void) {
    double amount;

    printf("Enter an amount: ");
    scanf("%lf", &amount);

    double finalAmount = amount + (amount * 0.05);
    printf("The amount after 5%% added is: %.2f\n", finalAmount);

    return 0;
}

