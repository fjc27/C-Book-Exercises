// Javier Celestino
// C Programming - A Modern Approach
// Chapter 2 Program 6
//
// This program asks the user to enter a value for x
// and then displays the value of the following polynomial:
// (((((3x + 2) x - 5) x - 1) x + 7) x - 6)
// This highlights Horner's Rule

#include <stdio.h>

int main(void) {
    printf("This program computes the following polyomial highlighting Horner's Rule:\n");
    printf("   (((((3x + 2) x - 5) x - 1) x + 7) x - 6)\n");
    printf("Which x integer do you want to solve for? ");

    long long x;

    scanf("%lld", &x);

    long long solution = ((((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("Replacing x with %lld, the solution is %lld\n", x, solution);
    printf("Congratulations! Now you know Horner's Rule!\n");

    return 0;
}
