/*
WAP to find the sum of digits of number using function.
*/

#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and dispaly the sum of digits 
    printf("Sum of digits: %d\n", sumOfDigits(number));
    
    return 0;
}
