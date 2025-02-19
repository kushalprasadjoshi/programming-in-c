/*
WAP to input a 4 digit number and find the sum of digits without using loops
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, r, sum = 0;

    // Take input from user
    printf("Enter a four digit number: ");
    scanf("%d", &n);

    // 1st Step
    r = n % 10;
    sum = sum + r;
    n = n / 10;

    // 2nd Step
    r = n % 10;
    sum = sum + r;
    n = n / 10;

    // 3rd Step
    r = n % 10;
    sum = sum + r;
    n = n / 10;

    // 4th Step
    r = n;
    sum = sum + r;

    // Printing sum
    printf("The sum of digits is %d", sum);

    return 0;
}
