/*
WAP to calculate nCr using recursion.
*/

#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // Recursive case: Multiply n by factorial of (n-1)
        return n * factorial(n - 1);
    }
}

// Function to calculate nCr using recursion
int nCr(int n, int r)
{
    // Formula for combination: nCr = n! / (r! * (n-r)!)
    int result = factorial(n) / (factorial(r) * factorial(n - r));

    return result;
}

int main(int argc, char const *argv[])
{
    int n, r;

    // Input from user
    printf("Enter the values for n and r in nCr: ");
    scanf("%d%d", &n, &r);

    // Check n is greater than or equal to r and both are positive
    if (n >= r && n >= 0 && r >= 0)
    {
        // Call the funtion and display the result
        printf("%dC%d = %d\n", n, r, nCr(n, r));
    }
    else
    {
        printf("Invalid input. Ensure n >= r and both are non-negative.\n");
    }

    return 0;
}
