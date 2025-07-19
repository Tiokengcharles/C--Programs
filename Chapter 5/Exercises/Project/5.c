#include <stdio.h>

int main() {
    double income, tax = 0.0;

    printf("Enter the amount of taxable income: ");
    scanf("%lf", &income);

    if (income > 750) {
        tax += (income - 750) * 0.01; 
        income = 750;
    }
    if (income > 2250) {
        tax += (income - 2250) * 0.02 + 37.50; 
        income = 2250;
    }
    if (income > 1250) {
        tax += (income - 1250) * 0.03 + 12.50; 
    }

    
    printf("Total tax: $%.2f\n", tax);

    return 0;
}


