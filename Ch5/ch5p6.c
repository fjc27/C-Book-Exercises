// Javier Celestino
// C Programming - A Modern Approach Exercises
//
// This program computes the check digit of a Universal Product Code (UPC)
// and then checks if the check digit matches the user's input
// to determine if the UPC that was input was valid.

#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    printf("Enter the UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    int second_sum = d2 + d4 + d6 + d8 + d10;
    int check_digit = (3 * first_sum) + second_sum;
    check_digit -= 1;
    check_digit %= 10;
    check_digit = 9 - check_digit;

    if (d12 == check_digit) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

    return 0;
}
