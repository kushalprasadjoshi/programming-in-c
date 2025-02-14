/*
WAP to swap two variables a and b using third variable.
*/

#include <stdio.h>

int main()
{
    int a, b;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Printing input numbers
    printf("The numbers before swapping : %d and %d\n", a, b);

    // Swapping the variables
    int temp = a;
    a = b;
    b = a;

    // Printing result
    printf("The numbers after swapping : %d and %d\n", a, b);

    return 0;
}

