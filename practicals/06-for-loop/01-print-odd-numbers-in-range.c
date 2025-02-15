/*
WAP to print odd numbers in a range in ascending order.
Also find thd sum.
Take  m and n as input from user.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, sum = 0;

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

    printf("The odd numbers in range from %d to %d are:\n", m, n);
    // Use iteration for continous printing
    for (; m <= n; m++)
    {
        // Check if the number is odd
        if (m % 2 != 0)
        {
            printf("%d\t", m);
            sum += m;
            m++;
        }
    }
    // Print sum
    printf("\nThe sum of odd numbers in range is %d", sum);
    
    return 0;
}
