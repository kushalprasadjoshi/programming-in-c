/*
WAP to print natural numbers from m to n, where m < n.
Also find the sum and average of numbers.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, diff, sum = 0;

    // Taking input from user
    printf("Enter the range of numbers: ");
    scanf("%d%d", &m, &n);

    // Swapping values of m and n if m > n
    if (m > n)
    {
        m = m + n;
        n = m - n;
        m = m - n;
    }
    diff = n - m + 1;

    printf("The natural numbers in range are:\n");
    for (; m <= n; m++)
    {
        printf("%d\t", m); // Printing number
        sum += m;   // Adding the number to sum
    }
    
    printf("\nThe sum of numbers is %d", sum);
    printf("\nThe average of numbers is %d", sum / diff);
    
    return 0;
}
