#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isEarlier(struct Date date1, struct Date date2) {
    if (date1.year < date2.year) return 1;
    if (date1.year > date2.year) return 0;
    if (date1.month < date2.month) return 1;
    if (date1.month > date2.month) return 0;
    if (date1.day < date2.day) return 1;
    return 0;
}

int main() {
    struct Date currentDate, earliestDate;
    int firstInput = 1;

    while (1) {
        printf("Enter a date (mm/dd/yyyy) or 0/0/0 to stop: ");
        scanf("%d/%d/%d", &currentDate.month, &currentDate.day, &currentDate.year);

        // Check for termination input
        if (currentDate.day == 0 && currentDate.month == 0 && currentDate.year == 0) {
            break;
        }

        if (firstInput || isEarlier(currentDate, earliestDate)) {
            earliestDate = currentDate; // Update earliest date
            firstInput = 0;
        }
    }

    if (!firstInput) {
        printf("The earliest date is: %02d/%02d/%04d\n", earliestDate.month, earliestDate.day, earliestDate.year);
    } else {
        printf("No valid dates were entered.\n");
    }

    return 0;
}

