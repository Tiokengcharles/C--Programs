#include <stdio.h>

int main(void) {
    int number, firstDigit, secondDigit, thirdDigit;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    thirdDigit = number % 10;      
    secondDigit = (number / 10) % 10; 
    firstDigit = number / 100;    
    printf("The digits are: %d, %d, %d\n", firstDigit, secondDigit, thirdDigit);

    return 0;
}

