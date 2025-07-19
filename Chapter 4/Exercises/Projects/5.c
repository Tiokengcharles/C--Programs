#include <stdio.h>

int main(void) {
    long long upc;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%lld", &upc);
    printf("You entered: %011lld\n", upc);

    return 0;
}

