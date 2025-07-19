#include <stdio.h>

int main() {
    int hour, minute;
    
    printf("Enter a 24-hour time (HH:MM): ");
    scanf("%d:%d", &hour, &minute);

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time format.\n");
        return 1;
    }

    int isPM = hour >= 12;
    if (hour > 12) {
        hour -= 12;
    } else if (hour == 0) {
        hour = 12; 
    }

    printf("Equivalent time in 12-hour format: %d:%02d %s\n", hour, minute, isPM ? "PM" : "AM");

    return 0;
}

