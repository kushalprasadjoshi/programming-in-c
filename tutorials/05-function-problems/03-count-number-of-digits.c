/*
WAP to count the number of digits in a user entered number using function.
*/

#include <stdio.h>

// Function to count the number of digits in given number
int countDigits(int num) {
    int count = 0;
    
    while (num != 0)
    {
        num /= 10;
        count++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the countDigits function to get the number of digits
    int digitCount = countDigits(number);

    // Display the result
    printf("Number of digits in %d is: %d\n", number, digitCount);

    return 0;
}
