#include <stdio.h>

int main() {
    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Error: Number must be a two-digit number.\n");
        return 1;
    }

    int tens = number / 10;
    int ones = number % 10;

    switch (tens) {
        case 1: printf("ten"); break;
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
    }

    if (ones != 0) {
        printf("-%s", (ones == 1) ? "one" :
                      (ones == 2) ? "two" :
                      (ones == 3) ? "three" :
                      (ones == 4) ? "four" :
                      (ones == 5) ? "five" :
                      (ones == 6) ? "six" :
                      (ones == 7) ? "seven" :
                      (ones == 8) ? "eight" :
                      (ones == 9) ? "nine" : "");
    }
    printf("\n");

    return 0;
}

