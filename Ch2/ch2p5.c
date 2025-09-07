// Javier Celestino
// C Programming - A Modern Approach
// Chapter 2 PRogram 5
//
// This program asks the user to enter a value for x
// and then displays the value of the following polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void) {
    long long x;

    printf("This program computes the following polynomial:\n");
    printf("   3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Which x integer do you want to solve for? ");

    scanf("%lld", &x);

    long long x_squared = x * x;
    long long x_cubed = x_squared * x;
    long long x_quad = x_cubed * x;
    long long x_penta = x_quad * x;

    long long solution = ((3 * x_penta) + (2 * x_quad) - (5 * x_cubed) - x_squared + (7 * x) - 6);

    printf("Replacing x with %lld, the solution is: %lld\n", x, solution);
    printf("Now you'll have this knowledge forever and always. Enjoy!\n");

    return 0;
}
