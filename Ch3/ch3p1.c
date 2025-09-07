// Javier Celestino
// C Programming - A Modern Approach
// Chapter 3 Program 1
//
// This program will accept a date from the user in the form mm/dd/yyyy
// and then displys it in the form yyyymmdd

#include <stdio.h>

int main(void) {
    printf("Enter a date (mm/dd/yyyy): ");
    int year, month, day;
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%.2d%.2d\n", year, month, day);

    return 0;
}
