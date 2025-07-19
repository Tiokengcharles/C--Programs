#include <stdio.h>
#include <ctype.h>

int main()
{
    char first[20], last[20];
    int i;

    printf("Enter a first and last name: ");
    scanf("%s", first);
    scanf("%s", last);

    printf("%s, %c.\n", last, toupper(first[0]));

    return 0;
}

