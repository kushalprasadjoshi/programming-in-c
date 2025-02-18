/*
Calculate nCr = n! / (n! (n - r)!)
*/

#include <stdio.h>

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main(int argc, char const *argv[])
{
    int n, r;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    int nCr = fact(n) / (fact(r) * fact(n - r));
    printf("%dC%d = %d\n", n, r, nCr);

    return 0;
}
