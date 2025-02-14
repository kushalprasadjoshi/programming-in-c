/*
WAP to find if a year is leap year or not.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    // Taking input from user
    printf("Enter the year: ");
    scanf("%d", &year);

    // Checking if the year is leap or not.
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}
