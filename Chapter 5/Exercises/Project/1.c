#include <stdio.h>

int main() {
    int number, digitCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number; 
    }

    if (number == 0) {
        digitCount = 1;
    } else {
        while (number > 0) {
            digitCount++;
            number /= 10; 
        }
    }

    printf("The number has %d digits.\n", digitCount);

    return 0;
}

