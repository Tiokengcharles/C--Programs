#include <stdio.h>

int main() {
    long long upc;

    printf("Enter a UPC: ");
    scanf("%lld", &upc);

    int length = 0;
    long long temp = upc;

    while (temp > 0) {
        length++;
        temp /= 10;
    }

    if (length == 12) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}

