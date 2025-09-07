// Javier Celestino
// C Programming - A Modern Approach
// Chapter 2 Program 7
//
// This program asks the user to enter a U.S. dollar amount
// and then shows how to pay that amount using
// the smallest number of $20, $10, $5, and $1 bills.

#include <stdio.h>

int main(void) {
    // Introduction
    printf("This program prompts you for a U.S. dollar amount.\n");
    printf("Afterwards, it will show you how to pay that amount ");  // Output line continues in the next printf statement.
    printf("using the smallest number of $20, $10, $5, and $1 bills.\n");

    // Prompt
    printf("Enter a dollar amount: ");

    int dollar_amount = 0;

    scanf("%d", &dollar_amount);

    const int bills_20 = 20;
    const int bills_10 = 10;
    const int bills_5 = 5;
    const int bills_1 = 1;

    int temp_amount = dollar_amount;
    int needed_20, needed_10, needed_5, needed_1;

    needed_20 = temp_amount / bills_20;

    temp_amount = temp_amount - (needed_20 * bills_20);

    needed_10 = temp_amount / bills_10;

    temp_amount = temp_amount - (needed_10 * bills_10);

    needed_5 = temp_amount / bills_5;

    temp_amount = temp_amount - (needed_5 * bills_5);

    needed_1 = temp_amount / bills_1;

    printf("$20 bills: %d\n", needed_20);
    printf("$10 bills: %d\n", needed_10);
    printf(" $5 bills: %d\n", needed_5);
    printf(" $1 bills: %d\n", needed_1);

    return 0;
}
