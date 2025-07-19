#include <stdio.h>

int main(void) {
    int number, firstDigit, secondDigit, thirdDigit, reversed;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    thirdDigit = number % 10;       
    secondDigit = (number / 10) % 10; 
    firstDigit = number / 100;      
    reversed = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    printf("The reversal is: %d\n", reversed);

    return 0;
}

