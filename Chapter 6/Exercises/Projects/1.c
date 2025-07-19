#include <stdio.h>

int main() {
    float number;
    float largest = -1; 

    while (1) {
        printf("Enter a number (negative to stop): ");
        scanf("%f", &number);

        if (number < 0) {
            break; 
        }

        if (number > largest) {
            largest = number;
        }
    }

    if (largest >= 0) {
        printf("The largest number entered was %.2f\n", largest);
    } else {
        printf("No non-negative numbers were entered.\n");
    }

    return 0;
}

