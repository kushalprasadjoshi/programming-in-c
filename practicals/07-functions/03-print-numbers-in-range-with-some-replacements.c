/*
Print numbers in range from m to n.
If number is divisible by 3, print "dbt".
If number is divisible by 5, print "dbf".
If number is divisible by both 5 and 3, print "dbt&f".
*/

#include <stdio.h>

// Function to check if the number is divisible by 5
int divisibleByFive(int n)
{
    return (n % 5 == 0);
}

// Function to check if the number is divisible by 3
int divisibleByThree(int n)
{
    return (n % 3 == 0);
}

int main(int argc, char const *argv[])
{
    int m, n;

    // Take input from user
    printf("Enter the range: ");
    scanf("%d%d", &m, &n);

    // Check if m is greater
    if (m > n)
    {
        // Swap values
        m = m + n;
        n = m - n;
        m = m - n;
    }
    
// Use iteration to do things continously
    for (; m <= n; m++)
    {
        if (divisibleByFive(m) && divisibleByThree(m))
        {
            printf("dbt&f\t");
        }

        else if (divisibleByFive(m))
        {
            printf("dbf\t");
        }
        else if (divisibleByThree(m))
        {
            printf("dbt\t");
        }
        else
        {
            printf("%d\t", m);
        }
    }

    return 0;
}
