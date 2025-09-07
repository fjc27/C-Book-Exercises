// Javier Celestino
// C Programming - A Modern Approach
// Chapter 5 Program 4
//
// This program prompts for wind speed in knots,
// then displays the corresponding description
// according to the Beaufort scale.

#include <stdio.h>

#define CALM (1)
#define LIGHT_AIR (3)
#define BREEZE (27)
#define GALE (47)
#define STORM (63)
#define HURRICANE (63)

int main(void) {
    printf("This program uses the Beaufort scale to estimate wind force.\n");
    printf("Please enter a wind speed in knots: ");

    int wind_speed;
    scanf("%d", &wind_speed);

    if ( wind_speed < CALM ) {
        printf("A wind speed of %d knots is considered a calm wind.\n", wind_speed);
    } else if ( wind_speed <= LIGHT_AIR ) {
        printf("A wind speed of %d knots is considered a light air.\n", wind_speed);
    } else if ( wind_speed <= BREEZE ) {
        printf("A wind speed of %d knots is considered a breeze.\n", wind_speed);
    } else if ( wind_speed <= GALE ) {
        printf("A wind speed of %d knots is considered a gale.\n", wind_speed);
    } else if ( wind_speed <= STORM ) {
        printf("A wind speed of %d knots is considered a storm.\n", wind_speed);
    } else if ( wind_speed > HURRICANE ) {
        printf("A wind speed of %d knots is considered a hurricane.\n", wind_speed);
    } else {
        printf("I don't know what you typed, but it ain't right.\n");
    }

    printf("Okay, bye!\n");

    return 0;
}
