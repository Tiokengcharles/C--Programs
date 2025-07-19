#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    if (number < 0 || number > 32767) {
        printf("Error: Number is out of range.\n");
        return 1;
    }
    printf("Your number in octal is: %05o\n", number);

    return 0;
}

