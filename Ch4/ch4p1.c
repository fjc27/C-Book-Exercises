// Javier Celestino
// C Programming - A Modern Approach Exercises
//
// This program prompts for a two-digit number,
// and then prints the digits reversed.

#define DIGIT_CONVERTER (10);

#include <stdio.h>

int main(void) {
    printf("Enter a two-digit number: ");

    int original_number;

    scanf("%d", &original_number);

    int first_digit = original_number / DIGIT_CONVERTER;
    int last_digit = original_number % DIGIT_CONVERTER;

    printf("The reversal is: %d%d\n", last_digit, first_digit);

    return 0;
}
