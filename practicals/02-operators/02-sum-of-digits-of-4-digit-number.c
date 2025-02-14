/*
WAP to find the sum of a 4-digit number without using loops.
*/

#include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    // Taking input from user
    printf("Enter a 4-digit number for the sum of digits: ");
    scanf("%d", &n);    // 1234

    // For unit place digit
    rem = n % 10;   // rem = 1234 % 10 = 4
    sum += rem;     // sum = 0 + 4 = 4
    n /= 10;        // n = 1234 / 10 = 123

    // For tenth place digit
    rem = n % 10;   // rem = 123 % 10 = 3
    sum += rem;     // sum = 4 + 3 = 7
    n /= 10;        // n = 123 / 10 = 12

    // For hundredth place digit
    rem = n % 10;   // rem = 12 % 10 = 2
    sum += rem;     // sum = 7 + 2 = 9
    n /= 10;        // n = 12 / 10 = 1

    // For thousandth place digit
    sum += n;   // sum = 9 + 1 = 10

    // Printing sum
    printf("Sum of digits = %d\n", sum);

    return 0;
}
