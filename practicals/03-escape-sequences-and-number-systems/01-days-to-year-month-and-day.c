/*
WAP to enter number of days and convert it to year, month and day.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;

    // Taking input from user
    printf("Enter the number of days: ");
    scanf("%d", &input);

    // Getting year
    int year = input / 365;
    int remainingDays = input % 365;

    // Getting month
    int month = remainingDays / 30;

    // Getting day
    int day = remainingDays % 30;

    // Printing result
    printf("%d days = %d years | %d months | %d days", input, year, month, day);
    
    return 0;
}
