// Javier Celestino
// C Programming - A Modern Approach
// Chapter 5 Program 5
//
// This program prompts the user to enter a taxable income amount,
// then displays the tax due.

#include <stdio.h>

#define ONE_PERCENT (0.01)
#define TWO_PERCENT (0.02)
#define THREE_PERCENT (0.03)
#define FOUR_PERCENT (0.04)
#define FIVE_PERCENT (0.05)
#define SIX_PERCENT (0.06)

#define FIRST_BRACKET (750)
#define SECOND_BRACKET (2250)
#define THIRD_BRACKET (3750)
#define FOURTH_BRACKET (5250)
#define FIFTH_BRACKET (7000)

#define FIRST_BRACKET_FEE (7.50)
#define SECOND_BRACKET_FEE (37.50)
#define THIRD_BRACKET_FEE (82.50)
#define FOURTH_BRACKET_FEE (142.50)
#define FIFTH_BRACKET_FEE (230.00)

int main(void) {
    printf("Welcome! This program can help you find out how much you owe in taxes.\n");
    printf("Please enter the amount of taxable income: $");

    float income, tax;

    scanf("%f", &income);

    if (income < 0) {
        printf("You don't pay taxes on negative income, silly!\n");
        return 1;
    } else if (income < FIRST_BRACKET) {
        tax = ONE_PERCENT * income;
    } else if (income <= SECOND_BRACKET) {
        tax = FIRST_BRACKET_FEE + (TWO_PERCENT * (income - FIRST_BRACKET));
    } else if (income <= THIRD_BRACKET) {
        tax = SECOND_BRACKET_FEE + (THREE_PERCENT * (income - SECOND_BRACKET));
    } else if (income <= FOURTH_BRACKET) {
        tax = THIRD_BRACKET_FEE + (FOUR_PERCENT * (income - THIRD_BRACKET));
    } else if (income <= FIFTH_BRACKET) {
        tax = FOURTH_BRACKET_FEE + (FIVE_PERCENT * (income - FOURTH_BRACKET));
    } else if (income > FIFTH_BRACKET) {
        tax = FIFTH_BRACKET_FEE + (SIX_PERCENT * (income - FIFTH_BRACKET));
    } else {
        printf("I don't know what you typed, but you goofed.\n");
        return 1;
    }

    printf("Tax due: $%.2f\n", tax);

    return 0;
}
