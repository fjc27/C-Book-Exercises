// Javier Celestino
// C Programming - A Modern Approach Exercises
//
// This program prompts the user for two fractions to add them.

#include <stdio.h>

int main(void) {
    printf("Enter two fractions separated by a plus sign: ");
    int first_num, first_denom, second_num, second_denom;
    scanf("%d/%d+%d/%d", &first_num, &first_denom, &second_num, &second_denom);

    int result_num = (first_num * second_denom) + (second_num * first_denom);
    int result_denom = first_denom * second_denom;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
