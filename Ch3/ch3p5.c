// Javier Celestino
// C Programming - A Modern Approach Exercises
//
// This program prompts the user to enter the numbers 1-16 in any order
// and then displays the numbers in a 4 by 4 arrangement,
// followed by the sum of the rows, columns, and diagonals.

#include <stdio.h>

int main(void) {
    printf("Enter the numbers from 1 to 16 in any order:\n");

    int first, second, third, fourth,
        fifth, sixth, seventh, eighth,
        ninth, tenth, eleventh, twelvth,
        thirteenth, fourteenth, fifteenth, sixteenth;

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &first, &second, &third, &fourth,
          &fifth, &sixth, &seventh, &eighth,
          &ninth, &tenth, &eleventh, &twelvth,
          &thirteenth, &fourteenth, &fifteenth, &sixteenth);

    printf("%d %d %d %d\n", first, second, third, fourth);
    printf("%d %d %d %d\n", fifth, sixth, seventh, eighth);
    printf("%d %d %d %d\n", ninth, tenth, eleventh, twelvth);
    printf("%d %d %d %d\n", thirteenth, fourteenth, fifteenth, sixteenth);

    int row_1_sum, row_2_sum, row_3_sum, row_4_sum;
    int col_1_sum, col_2_sum, col_3_sum, col_4_sum;
    int dia_1_sum, dia_2_sum;

    row_1_sum = first + second + third + fourth;
    row_2_sum = fifth + sixth + seventh + eighth;
    row_3_sum = ninth + tenth + eleventh + twelvth;
    row_4_sum = thirteenth + fourteenth + fifteenth + sixteenth;

    col_1_sum = first + fifth + ninth + thirteenth;
    col_2_sum = second + sixth + tenth + fourteenth;
    col_3_sum = third + seventh + eleventh + fourteenth;
    col_4_sum = fourth + eighth + twelvth + sixteenth;

    dia_1_sum = first + sixth + eleventh + sixteenth;
    dia_2_sum = fourth + seventh + tenth + thirteenth;

    printf("Row sums: %d %d %d %d\n", row_1_sum, row_2_sum, row_3_sum, row_4_sum);
    printf("Column sums: %d %d %d %d\n", col_1_sum, col_2_sum, col_3_sum, col_4_sum);
    printf("Diagonal sums: %d %d\n", dia_1_sum, dia_2_sum);

    return 0;
}
