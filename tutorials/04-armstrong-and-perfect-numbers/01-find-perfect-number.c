/*
WAP to find if a number is perfect number or not.
(Hint: A number is perfect if the sum of the factors of the number is equal to the number.
Eg: 28 is a perfect number since sum of its factors 1+2+4+7+14=28)
*/

#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}