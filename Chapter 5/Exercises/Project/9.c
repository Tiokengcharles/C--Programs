#include <stdio.h>

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    // Compare the dates
    if (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2)) {
        printf("First date is earlier.\n");
    } else if (year1 > year2 || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2)) {
        printf("Second date is earlier.\n");
    } else {
        printf("Both dates are the same.\n");
    }

    return 0;
}

