// Javier Celestino
// C Programming - A Modern Approach
// Chapter 5 Program 1
//
// This program calculates how many digits a number contains
// up to four digits.

#include <stdio.h>

int main(void) {
    printf("Enter a number: ");
    int input_number;
    scanf("%d", &input_number);

    if ( input_number >= 0 && input_number <= 9 ) {
        printf("The number %d has 1 digit.\n", input_number);
    } else if ( input_number >= 10 && input_number <= 99 ) {
        printf("The number %d has 2 digits.\n", input_number);
    } else if ( input_number >= 100 && input_number <= 999 ) {
        printf("The number %d has 3 digits.\n", input_number);
    } else if ( input_number >= 1000 && input_number <= 9999 ) {
        printf("The number %d has 4 digits.\n", input_number);
    } else {
        printf("The book said to only do four digits, so I'm doing nothing with your input. :)\n");
    }

    return 0;
}
