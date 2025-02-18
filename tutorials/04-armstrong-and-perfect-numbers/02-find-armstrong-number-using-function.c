/*
WAP to find if a number is Armstrong's number.
Hint:
    A number is Armstrong if the sum of its digit raised to a power is equal to the
    number. The power is equal to the number of digits.
Example:
     153 = 13 + 53 +  33  and
     1634 =  14 + 64 + 34 + 44
*/

// Solution using the function

#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int numberOfDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrongNumber(int num)
{
    int originalNum = num;
    int sum = 0;
    int power = numberOfDigits(num);
    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }
    return (sum == originalNum);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrongNumber(number))
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}