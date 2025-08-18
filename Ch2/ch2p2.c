// Copyright 2025
// Javier Celestino
// C Programming - A Modern Approach Exercises
// This program is meant to compute the volume of a sphere
// with a 10-meter radius, using the formula v = 4/3(pi)r^3

#include <stdio.h>

int main(void) {
    int radius = 10;
    int r_cubed = radius * radius * radius;
    float pi = 3.14159f;
    float volume = (4.0f / 3.0f) * pi * r_cubed;

    printf("Hello, there! In case you were wondering...\n");
    printf("The volume of a sphere with a 10-meter radius is ~%.2f\n", volume);
    printf("Now you can win your next trivia night. Hurray!\n");

    return 0;
}
