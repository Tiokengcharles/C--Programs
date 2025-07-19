#include <stdio.h>

int main() {
    int shares;
    double pricePerShare, commission, totalCost;
    char choice;

    do {
        printf("Enter the number of shares: ");
        scanf("%d", &shares);
        printf("Enter the price per share: ");
        scanf("%lf", &pricePerShare);

        totalCost = shares * pricePerShare;

        if (shares > 2000) {
            commission = 33 + (0.02 * shares); 
        } else {
            commission = 33 + (0.03 * shares); 
        }

        printf("Total cost: $%.2f\n", totalCost + commission);
        printf("Commission: $%.2f\n", commission);

        printf("Would you like to enter another trade? (y/n): ");
        scanf(" %c", &choice); 
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

