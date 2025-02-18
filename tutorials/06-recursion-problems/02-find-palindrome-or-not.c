/*
WAP to find if a number is palindrome or not using recursion.
*/

#include <stdio.h>

// Function to reverse a number using recursion
int reverseNumber(int num)
{
    static int reversedNum = 0;

    // Base case: When the number becomes 0
    if (num == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: Reverse the number and call the function
        reversedNum = reversedNum * 10 + num % 10;
        reverseNumber(num / 10);
        return reversedNum;
    }
}

// Function to check if a number is palindrome
int isPalindrome(int num)
{
    // Call the reverse number function to get the reversed number
    int reversed = reverseNumber(num);

    // Check if the reversed number is equal to the original number
    if (reversed == num)
    {
        return 1; // It's a palindrome
    }
    else
    {
        return 0; // It's not a palindrome
    }
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
    if (isPalindrome(number))
    {
        printf("%d is a palindrome.\n", number);
    }
    else
    {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
