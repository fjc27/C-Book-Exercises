// Javier Celestino
// C Programming - A Modern Approach
// Chapter 5 Program 7
//
// This program finds the largest and smallest of four integers entered by the user.

#include <stdio.h>

int main(void) {
    printf("Welcome! This program finds the largest and smallest of four integers.\n");
    printf("Enter four integers: ");

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int min1 = a, max1 = b;
    int min2 = c, max2 = d;
    int smallest, largest;

    if (a > b) {
        min1 = b;
        max1 = a;
    }

    if (c > d) {
        min2 = d;
        max2 = c;
    }

    smallest = min1;

    if (min2 < smallest) {
        smallest = min2;
    }

    largest = max1;

    if (max2 > largest) {
        largest = max2;
    }

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}
