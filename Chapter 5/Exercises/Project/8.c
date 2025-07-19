#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute, user_time, i;
    int closest_index = 0;
    int min_diff;

    // Departure and arrival times (in minutes since midnight)
    const int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    const int arrivals[]   = {616, 712, 811, 900, 968, 1075, 1260, 1438};

    // Ask for user input
    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);
    user_time = hour * 60 + minute;

    // Initialize minimum difference
    min_diff = abs(user_time - departures[0]);

    // Find closest departure
    for (i = 1; i < 8; i++) {
        int diff = abs(user_time - departures[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_index = i;
        }
    }

    // Convert departure to 12-hour format
    int dep = departures[closest_index];
    int arr = arrivals[closest_index];

    int dep_hour = dep / 60;
    int dep_min = dep % 60;
    char dep_suffix[] = "a.m.";
    if (dep_hour >= 12) {
        dep_suffix[0] = 'p';
        if (dep_hour > 12) dep_hour -= 12;
    } else if (dep_hour == 0) {
        dep_hour = 12;
    }

    int arr_hour = arr / 60;
    int arr_min = arr % 60;
    char arr_suffix[] = "a.m.";
    if (arr_hour >= 12) {
        arr_suffix[0] = 'p';
        if (arr_hour > 12) arr_hour -= 12;
    } else if (arr_hour == 0) {
        arr_hour = 12;
    }

    // Print result
    printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s\n",
           dep_hour, dep_min, dep_suffix,
           arr_hour, arr_min, arr_suffix);

    return 0;
}

