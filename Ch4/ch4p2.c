// Javier Celestino
// C Programming - A Modern Approach Exercises
//
// This program prompts for a three-digit number,
// and then prints the digits reversed.

#define THREE_DIGIT_CONVERTER (100);
#define TWO_DIGIT_CONVERTER (10);

#include <stdio.h>

int main(void) {
    printf("Enter a three-digit number: ");

    int original_number;

    scanf("%d", &original_number);

    int first_digit = original_number / THREE_DIGIT_CONVERTER;
    int middle_digit = original_number % THREE_DIGIT_CONVERTER;
    middle_digit = middle_digit / TWO_DIGIT_CONVERTER;
    int last_digit = original_number % TWO_DIGIT_CONVERTER;

    printf("The reversal is: %d%d%d\n", last_digit, middle_digit, first_digit);

    return 0;
}
