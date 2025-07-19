#include <stdio.h>

int main(void) {
    int itemNumber;
    float unitPrice;
    char purchaseDate[11]; 
   
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s", purchaseDate);
    
    printf("Item Number: %d\n", itemNumber);
    printf("Unit Price: %.2f\n", unitPrice);
    printf("Purchase Date: %s\n", purchaseDate);

    return 0;
}

