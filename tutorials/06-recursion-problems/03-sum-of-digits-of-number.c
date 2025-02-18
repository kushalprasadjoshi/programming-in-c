/*
WAP to find sum of digits of a number using recursion.
*/

#include <stdio.h>

// Function to calculate the sum of digits using recursion
int sumOfDigits(int num) {
    // Base case: When the number becomes 0
    if (num == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: Add the last digit and call the function
        return (num % 10) + sumOfDigits(num / 10);
    }
    
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
    printf("Sum of digits: %d\n", sumOfDigits(number));
    
    return 0;
}
