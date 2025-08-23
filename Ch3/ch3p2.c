// Javier Celestino
// C Programming - A Modern Approach Exercises
// This program prompts the user for product information and formats it for output.

#include <stdio.h>

int main(void) {
    printf("Enter item number: ");
    int item_number;
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    float unit_price;
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int month, day, year;
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%-5d\t$%7.2f\t%-2d/%-2d/%-4d\n", item_number, unit_price, month, day, year);

    return 0;
}
