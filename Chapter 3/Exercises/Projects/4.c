#include <stdio.h>

int main(void) {
    char phone[15];

    printf("Enter a phone number (xxx-xxx-xxxx): ");
    scanf("%s", phone);

    printf("You entered: %s\n", phone);

    return 0;
}

