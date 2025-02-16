/*
WAP to calculate C(n,r) using function
HINT:
    nCr = n! / r! * (n - r)!
*/

#include <stdio.h>

// Write function to find factorial
long long factorial(int n)
{
    long long fact = 1;

    // Use loop to find factorial
    for (; n != 0; n--)
    {
        fact *= n;
    }

    return fact; // Return factorial of number
}

int main(int argc, char const *argv[])
{
    int n, r;
    long long nCr;

    // Take input
    printf("Enter value of n and r: ");
    scanf("%d%d", &n, &r);

    // Calculate nCr
    if (r >= 0 && n >= r)
    {
        // If true nCr is possible
        nCr = factorial(n) / (factorial(r) * factorial(n - r));

        // Print the result
        printf("The combination, C(%d, %d) is %lld", n, r, nCr);
    }
    else
    {
        printf("Your input is wrong. (r >= 0 and n >= r)");
    }

    return 0;
}
