// Javier Celestino
// C Programming - A Modern Approach
// Chapter 4 Program 4
//
// This program accepts an interger and displays it in octal (base 8).

#include <stdio.h>

int main(void) {
    int original_number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &original_number);

    int temp_num = original_number;

    int digit_5 = temp_num % 8;
    temp_num /= 8;

    int digit_4 = temp_num % 8;
    temp_num /= 8;

    int digit_3 = temp_num % 8;
    temp_num /= 8;

    int digit_2 = temp_num % 8;
    temp_num /= 8;

    int digit_1 = temp_num % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", digit_1, digit_2, digit_3, digit_4, digit_5);

    return 0;
}
