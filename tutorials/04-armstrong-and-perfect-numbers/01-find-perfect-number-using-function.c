/*
WAP to find if a number is perfect number or not.
(Hint: A number is perfect if the sum of the factors of the number is equal to the number.
Eg: 28 is a perfect number since sum of its factors 1+2+4+7+14=28)
*/

// This is the solution using the function

#include <stdio.h>
// Function to check if a number is a perfect number
int isPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPerfectNumber(number))
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}