#include <stdio.h>

int main(void) {
    int amount;
    
  
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    // Calculating bills
    int twenties = amount / 20;
    amount %= 20;
    
    int tens = amount / 10;
    amount %= 10;
    
    int fives = amount / 5;
    amount %= 5;
    
    int ones = amount;

    printf("The amount can be made with:\n");
    printf("%d $20 bills\n", twenties);
    printf("%d $10 bills\n", tens);
    printf("%d $5 bills\n", fives);
    printf("%d $1 bills\n", ones);
    
    return 0;
}

