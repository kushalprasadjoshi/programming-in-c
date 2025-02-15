/*
WAP to find factorial of a number.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    long long fact = 1;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use iteration to find factorial
    for (; n != 0; n--)
    {
       fact *= n;
    }
    
    // Print result
    printf("The factorial of entered number is %lld", fact);
    
    return 0;
}
