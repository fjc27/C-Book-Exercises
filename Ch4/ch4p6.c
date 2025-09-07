// Javier Celestino
// C Programming - A Modern Approach
// Chapter 4 Program 6
//
// This program computes the check digit of a Europoean Article Number (EAN)

#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int first_sum = d2 + d4 + d6 + d8 + d10 + d12;
    int second_sum = d1 + d3 + d5 + d7 + d9 + d11;
    int check_digit = (3 * first_sum) + second_sum;
    check_digit -= 1;
    check_digit %= 10;
    check_digit = 9 - check_digit;

    printf("Check digit: %d\n", check_digit);

    return 0;
}
