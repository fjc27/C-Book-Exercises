// Javier Celestino
// C Programming - A Modern Approach Exercises
// This program prompts the user for a telephone number in one format
// and then displays the number in a different format.

#include <stdio.h>

int main(void) {
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int area_code, first_three, last_four;
    scanf("(%d) %d-%d", &area_code, &first_three, &last_four);

    printf("You entered %d.%d.%d\n", area_code, first_three, last_four);

    return 0;
}
