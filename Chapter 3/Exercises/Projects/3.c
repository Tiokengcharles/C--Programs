#include <stdio.h>
#include <string.h>

int main(void) {
    char isbn[14]; 

    printf("Enter an ISBN (e.g., 978-0-306-40615-7): ");
    scanf("%s", isbn);

    if (strlen(isbn) == 13 && isbn[3] == '-' && isbn[6] == '-' && isbn[11] == '-') {
        printf("Valid ISBN: %s\n", isbn);
    } else {
        printf("Invalid ISBN format.\n");
    }

    return 0;
}

