/*
WAP to find a number is prime or not using function.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // 1 and numbers less than 1 are not prime
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false; // If num is divisible by any number from 2 to sqrt(num), it is not prime
        }
    }

    return true; // If no divisors found, the number is prime
}

int main(int argc, char const *argv[])
{
    int number;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime using isPrime function
    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
