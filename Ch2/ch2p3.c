// Copyright 2025
// Javier Celestino
// C Programming - A Modern Approach Exercises
// This program is meant to compute the volume of a sphere
// with a user-specified radius, using the formula v = 4/3(pi)r^3

#include <stdio.h>

int main(void) {
    int radius = 0, r_cubed = 0;
    float pi = 3.14159f;
    float volume;

    printf("This program helps you calculate the volume (v) of a sphere.\n");
    printf("The formula used is v = (4/3) * pi * r^3\n");
    printf("Please enter the radius (r) of the sphere: ");

    scanf("%d", &radius);

    r_cubed = radius * radius * radius;
    volume = (4.0f / 3.0f) * pi * r_cubed;

    printf("The volume of a sphere with a %d-meter radius is ~%.2f.\n", radius, volume);

    return 0;
}
