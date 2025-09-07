// Javier Celestino
// C Programming - A Modern Approach
// Chapter 5 Program 2
//
// This program prompts for a 24-hour time and displays the time in 12-hour format.
//
// *Note: I've included some input-checks in this program,
// but not robust checks. I haven't gotten to that part of in the book, yet.

#include <stdio.h>

#define TIME_CONVERSION (12)
#define MIDNIGHT_24 (24)
#define MIDNIGHT_12 (12)
#define MIDNIGHT_0 (0)
#define NOON (12)
#define AM_PM (2)

void fake_news();

int main(void) {
    printf("Enter a 24-hour time: ");
    int hour, minute;
    char *time_of_day[AM_PM];
    scanf("%d:%d", &hour, &minute);

    if ((hour < MIDNIGHT_0 || hour > MIDNIGHT_24) || (hour == MIDNIGHT_24 && minute > 0)) {
        fake_news();
        return 1;
    }

    if ( hour >= NOON ) {
        *time_of_day = "PM";
    } else {
        *time_of_day = "AM";
    }

    if ( hour == MIDNIGHT_24 ) {
        hour = MIDNIGHT_12;
        *time_of_day = "AM";
    } else if ( hour == MIDNIGHT_0 ) {
        hour = MIDNIGHT_12;
    } else if ( hour > NOON ) {
        hour -= TIME_CONVERSION;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d %s\n", hour, minute, *time_of_day);

    return 0;
}

void fake_news(void) {
    printf("That's not a real time, silly!\n");
}
