/*
WAP to count the number of digits in a number using recursion.
*/

#include <stdio.h>

// Function to count digits using recursion
int countDigits(int num)
{
    // Base case: When the number becomes 0
    if (num == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: Divide the number by 10 and call the function
        return 1 + countDigits(num / 10);
    }
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
    printf("Number of digits: %d\n", countDigits(number));
    
    return 0;
}
