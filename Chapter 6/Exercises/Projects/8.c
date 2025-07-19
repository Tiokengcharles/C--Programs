#include <stdio.h>

int main() {
    int daysInMonth, startDay;

    printf("Enter number of days in month: ");
    scanf("%d", &daysInMonth);

    printf("Enter starting day of the week (1=Sun, 2=Mon, ..., 7=Sat): ");
    scanf("%d", &startDay);

    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // First loop: print spaces before the first day
    int i = 1;  // Initialization outside loop
    while (i < startDay) {
        printf("    ");
        i++;  // Increment inside loop
    }

    // Second loop: print the days of the month
    int day = 1;  // Initialization outside loop
    while (day <= daysInMonth) {
        printf("%3d ", day);
        if ((day + startDay - 1) % 7 == 0) {
            printf("\n");
        }
        day++;  // Increment inside loop
    }

    printf("\n");

    return 0;
}

