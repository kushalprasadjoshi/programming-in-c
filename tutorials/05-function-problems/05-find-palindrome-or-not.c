/*
WAP to check if a number is palindrome is not.
*/

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num)
{
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and display if the number is palindrome
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
