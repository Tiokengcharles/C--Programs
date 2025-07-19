 #include <stdio.h>

int main(void) {
    double initialLoan, interestRate, balance;
    
    printf("Enter amount of loan: ");
    scanf("%lf", &initialLoan);
    
    printf("Enter interest rate (in %%): ");
    scanf("%lf", &interestRate);
    
    interestRate /= 100.0;

    balance = initialLoan;

    for (int month = 1; month <= 3; month++) {
        balance += balance * interestRate; // Add interest
        printf("Balance after month %d: %.2f\n", month, balance);
    }

    return 0;
}

