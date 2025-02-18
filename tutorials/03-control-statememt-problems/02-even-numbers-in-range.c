/*
WAP to print even numbers within range between m and n.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;

    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);

    printf("Even numbers between %d and %d are: ", m, n);
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}