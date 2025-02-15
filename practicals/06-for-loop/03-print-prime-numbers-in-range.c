/*
WAP to print prime numbers in range from m to n.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, count;

    // Take user input
    printf("Enter the range : ");
    scanf("%d%d", &m, &n);

    // Check if m > n
    if (m > n)
    {
        // If true swap values of m and n
        m = m + n;
        n = m - n;
        m = m - n;
    }

    printf("The prime numbers in range from %d to %d are:\n", m, n);
    // Use iteration for continous printing
    for (int i = m; i <= n; i++)
    {
        count = 0; // Format count to zero

        // Check if the number is prime
        for (int j = 1; j <= i; j++)
        {
            // Check if any number is factor of number or not
            if (i % j == 0)
            {
                count++; // Count the number of factors
            }
        }

        // If count of factors is 2 then the number is prime
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
