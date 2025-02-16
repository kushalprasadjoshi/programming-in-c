/*
WAP to print fibonacci series upto n terms using recursion.
*/

#include <stdio.h>

// Declare required function
int fib(int n, int a, int b);

int main(int argc, char const *argv[])
{
    int n, x = 0, y = 1;

    // Read number of terms
    printf("Enter the number of terms in fibonacci series(> 2): ");
    scanf("%d", &n);

    printf("The terms in fibonacci series are:\n");
    // Call fib function to print terms
    fib(n, 0, 1);

    return 0;
}

// Defination of fib function
int fib(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d\t", a);
        fib(n - 1, b, a + b);
    }
}