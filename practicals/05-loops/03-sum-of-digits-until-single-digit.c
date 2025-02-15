/*
WAP to find sum of digits of user input number until it is a single digit
*/

#include <stdio.h>

// Function to find sum of digits in number
int sumOfDigits(int n) {
    int rem, sum = 0;

    // Finding sum of digits in n
    for (; n != 0; n /= 10)
    {
        rem = n % 10;
        sum += rem;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int n;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling sumOfDigits function until the number < 9
    while (n > 9)
    {
        n = sumOfDigits(n);
    }

    // Printing final result
    printf("The final sum of digits is %d", n);

    return 0;
}
