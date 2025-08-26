// Javier Celestino
// C Programming - A Modern Approach Exercises
//
// This program modifies the book's broker.c program.
// The changes are the following:
//     a) Prompt for the number of shares and price per share, instead of the value of the trade.
//     b) Compute the commission charged by a rival broker and compare the two comissions.

#include <stdio.h>

int main(void) {
    int shares;
    float share_price, commission, value, rival_commission;

    // **** Part of the original function from the book ****
    // printf("Enter value of trade: ");
    // scanf("%f", &value);

    printf("Enter the number of shares:   ");
    scanf("%d", &shares);

    printf("Enter the price per share:    $");
    scanf("%f", &share_price);

    value = shares * share_price;

    printf("Trade value:                  $%.2f\n", value);

    if (value < 2500.00f) {
        commission = 30.00f + 0.017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + 0.0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + 0.0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + 0.0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + 0.0011f * value;
    } else {
        commission = 255.0f + 0.0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    if (shares < 2000) {
        rival_commission = 33.00f + 0.03f * shares;
    } else {
        rival_commission = 33.00f + 0.02f * shares;
    }

    printf("Commission (original broker): $%.2f\n", commission);
    printf("Comission (rival broker):     $%.2f\n", rival_commission);

    return 0;
}
