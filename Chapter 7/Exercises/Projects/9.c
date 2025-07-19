#include <stdio.h>
#include <ctype.h>

int main()
{
    int hour, minute;
    char meridiem1, meridiem2;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c%c", &hour, &minute, &meridiem1, &meridiem2);

    meridiem1 = toupper(meridiem1);
    /* PM case */
    if (meridiem1 == 'P' && hour != 12)
        hour += 12;
    /* AM case */
    else if (meridiem1 == 'A' && hour == 12)
        hour = 0;

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

    return 0;
}

