/*
WAP to check if a number is palindrome or not.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[20];
    int isNotPalindrome = 0;

    // Prompt the user for input
    printf("Enter a string: ");
    scanf("%s", string);

    // Compare characters from the start and end of the string and stop if a mismatch is found or the middle of the string is reached.
    for (int i = 0; i < strlen(string) / 2; i++)
    {
        if (string[i] != string[strlen(string) - i - 1 ])
        {
            isNotPalindrome = 1;
            break;
        }
    }

    // Output the result
    if (isNotPalindrome)
    {
        printf("%s is not a palindrome\n", string);
    }
    else
    {
        printf("%s is a palindrome\n", string);
    }

    return 0;
}
