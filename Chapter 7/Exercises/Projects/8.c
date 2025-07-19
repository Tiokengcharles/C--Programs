#include <stdio.h>
#include <ctype.h>

int main()
{
    int hour, minute;
    char ampm, extra;

    printf("Enter a time (e.g. 1:15 PM): ");
    scanf("%d : %d %c%c", &hour, &minute, &ampm, &extra);

    ampm = toupper(ampm); /* Normalize AM/PM */
    
    if (ampm == 'P' && hour != 12)
        hour += 12;
    else if (ampm == 'A' && hour == 12)
        hour = 0;

    printf("24-hour time: %.2d:%.2d\n", hour, minute);

    return 0;
}

