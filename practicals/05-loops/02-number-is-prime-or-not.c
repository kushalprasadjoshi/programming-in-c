/*
WAP to find if a number is prime or not.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    // Taking input from user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Checking the number using loop for prime
    for (int i = 2; i < n / 2; i++)
    {
        // Checking the condition that if any number divides input number exactly
        if (n % i == 0)
        {
            printf("%d is not prime.", n);
            goto end;   // If any number > 1 divides a number it is not prime
        }
        
    }
    printf("%d is prime", n);   // If no number > 1 divides a number it is prime

    end:
        printf("\nEnding program...");

    return 0;
}
