/*
WAP to find greatest among a, b and c.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Checking conditions for a to be greatest
    if (a > b && a > c)
    {
        printf("%d is greatest.", a);
    }
    
    // Checking condition for b to be greatest if a is not
    else if (b > c)
    {
        printf("%d is greatest.", b);
    }

    // If both a and b are not greatest the c is greatest
    else
    {
        printf("%d is greatest.", c);
    }
    
    return 0;
}
