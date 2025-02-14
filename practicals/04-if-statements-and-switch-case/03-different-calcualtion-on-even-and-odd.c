/*
WAP to check if a number is even or odd.
-> If even add 100 to the number.
-> If odd subtract 100 from the number.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    // Taking input from user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Condition 1: Checking if the number is even
    if (n % 2 == 0)
    {
        printf("%d is even.\n", n);
        // Adding 100 to number
        printf("So the result after adding 100 is %d", n + 100);
    }

    // Condition 2: If it is not even then it is odd
    else
    {
        printf("%d is odd.\n", n);
        // Adding 100 to number
        printf("So the result after subtracting 100 is %d", n - 100);
    }
      
    return 0;
}
