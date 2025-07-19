#include <stdio.h>

int main() {
    double loanAmount, interestRate, monthlyPayment;
    int numberOfPayments;

    printf("Enter the loan amount: ");
    scanf("%lf", &loanAmount);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &interestRate);
    printf("Enter the monthly payment amount: ");
    scanf("%lf", &monthlyPayment);
    printf("Enter the number of payments made: ");
    scanf("%d", &numberOfPayments);

    double monthlyInterestRate = interestRate / 100 / 12;

    int i = 0;  // Initialization outside the loop
    while (i < numberOfPayments) {
        loanAmount = (loanAmount * (1 + monthlyInterestRate)) - monthlyPayment;
        if (loanAmount < 0) {
            loanAmount = 0;
            break;
        }
        i++;  // Increment inside the loop
    }

    printf("Remaining balance after %d payments: $%.2f\n", numberOfPayments, loanAmount);

    return 0;
}

