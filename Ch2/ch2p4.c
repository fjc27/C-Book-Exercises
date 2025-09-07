// Javier Celestino
// C Programming - A Modern Approach
// Chapter 2 Program 4
//
// This program is meant to ask the user to enter a dollars-and-cents amount,
// then displays the amount with 5% tax added.
// For example:
//     Enter an amount: 100.00
//     With tax added: $105.00

#include <stdio.h>

#define TAX (0.05f)

int main(void) {
    float monies_amount = 0.0f, taxed_amount = 0.0f;

    printf("Hello, there!\n");
    printf("This program will calculate a 5%% tax to whatever dollars-and-cents amount you enter.\n");
    printf("Afterwards, this program will add that tax to the amount you entered.\n");

    printf("Please enter the amount of monies you want to see taxed: ");
    scanf("%f", &monies_amount);

    taxed_amount = monies_amount + (monies_amount * TAX);

    printf("At a 5%% tax rate, your $%.2f becomes $%.2f\n", monies_amount, taxed_amount);
    printf("That's all for now. Taxes make me sad.\n");

    return 0;
}
