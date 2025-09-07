// Javier Celestino
// C Programming - A Modern Approach
// Chapter 4 Program 3
//
// This program prompts for a three-digit number,
// and then prints the digits reversed without using arithmetic.

#include <stdio.h>

int main(void) {
    printf("Enter a three-digit number: ");

    int first_digit, middle_digit, last_digit;
    scanf("%1d%1d%1d", &first_digit, &middle_digit, &last_digit);

    printf("The reversal is: %d%d%d\n", last_digit, middle_digit, first_digit);

    return 0;
}
