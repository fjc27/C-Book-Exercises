// Javier Celestino
// C Programming - A Modern Approach Exercises
// This program calculates the remaining balance on a loan
// after the first, second, and third monthly payments.

#include <stdio.h>

#define MONTHS_IN_YEAR (12)
#define PERCENTAGE_CONVERTER (100)

int main(void) {
    printf("This program calculates the remaining balance on a loan ");
    printf("after the first, second, and third monthly payments.\n");

    printf("Enter amount of loan: ");
    float loan_amount = 0;
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    float interest_rate = 0;
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    float monthly_payment = 0;
    scanf("%f", &monthly_payment);

    float first_month_balance = 0;
    float second_month_balance = 0;
    float third_month_balance = 0;

    float monthly_interest = interest_rate / PERCENTAGE_CONVERTER / MONTHS_IN_YEAR;

    first_month_balance = loan_amount + (loan_amount * monthly_interest);
    first_month_balance = first_month_balance - monthly_payment;

    printf("\nBalance remaining after first payment: $%.2f\n", first_month_balance);

    second_month_balance = first_month_balance + (first_month_balance * monthly_interest);
    second_month_balance = second_month_balance - monthly_payment;

    printf("Balance remaining after second payment: $%.2f\n", second_month_balance);

    third_month_balance = second_month_balance + (second_month_balance * monthly_interest);
    third_month_balance = third_month_balance - monthly_payment;

    printf("Balance remaining after third payment: $%.2f\n", third_month_balance);

    return 0;
}
