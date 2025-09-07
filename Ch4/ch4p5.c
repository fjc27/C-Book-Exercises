// Javier Celestino
// C Programming - A Modern Approach
// Chapter 4 Program 5
//
// This program computes the check digit of a Universal Product Code (UPC)

#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

    int first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    int second_sum = d2 + d4 + d6 + d8 + d10;
    int check_digit = (3 * first_sum) + second_sum;
    check_digit -= 1;
    check_digit %= 10;
    check_digit = 9 - check_digit;

    printf("Check digit: %d\n", check_digit);

    return 0;
}
