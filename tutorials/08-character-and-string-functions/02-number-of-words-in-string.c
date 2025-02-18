/*
WAP to count the number of words in string.
*/

#include <stdio.h>
#include <string.h>

// Function to count number of words
int countNumberOfWords(char string[100]) {
    int numberOfWords = 1;

    // Count the number of words in string
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ' && string[i+1] != ' ')
        {
            numberOfWords++;    // Number of words equals the number of genuine space added by one in string
        }
        
    }
    // If space at first it must be omitted
    if (string[0] == ' ')
    {
        numberOfWords--;
    }
    
    return numberOfWords;
}

int main(int argc, char const *argv[])
{
    char string[100];

    // Take string as input from user
    printf("Enter your string: ");
    gets(string);

    // Calculate and print the number of words
    printf("The number of words are: %d", countNumberOfWords(string));

    return 0;
}
