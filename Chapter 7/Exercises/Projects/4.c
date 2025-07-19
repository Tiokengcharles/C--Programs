#include <stdio.h>
#include <ctype.h>

char letterToDigit(char c)
{
    if (c >= 'A' && c <= 'C') return '2';
    else if (c >= 'D' && c <= 'F') return '3';
    else if (c >= 'G' && c <= 'I') return '4';
    else if (c >= 'J' && c <= 'L') return '5';
    else if (c >= 'M' && c <= 'O') return '6';
    else if (c >= 'P' && c <= 'S') return '7';
    else if (c >= 'T' && c <= 'V') return '8';
    else if (c >= 'W' && c <= 'Y') return '9';
    else return c; /* For characters outside A-Y */
}

int main()
{
    char phone[100];
    int i;
    int c;

    printf("Enter phone number: ");
    /* Use fgets for input */
    if (fgets(phone, sizeof(phone), stdin) == NULL) {
        return 1; /* Handle input error */
    }

    printf("Numeric form: ");
    for (i = 0; phone[i] != '\0'; i++) {
        c = phone[i];
        if (isalpha(c)) {
            c = toupper(c);
            putchar(letterToDigit(c));
        } else {
            putchar(c);
        }
    }
    return 0;
}

