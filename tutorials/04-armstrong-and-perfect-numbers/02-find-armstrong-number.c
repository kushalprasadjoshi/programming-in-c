/*
WAP to find if a number is Armstrong's number.
Hint:
    A number is Armstrong if the sum of its digit raised to a power is equal to the
    number. The power is equal to the number of digits.
Example:
     153 = 13 + 53 +  33  and
     1634 =  14 + 64 + 34 + 44
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // power 3 since digits length = 3 
    // power 4 since digits length = 4 
    int number, originalNumber, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
    // Counting the number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    // Calculating result
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    if (result == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}