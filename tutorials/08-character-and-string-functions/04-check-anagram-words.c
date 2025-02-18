/*
WAP to check if two words are anagram.
    HINT:
        ANAGRAM:
            Two or more words are said anagram if they have same letters arranged in different format.
            Conditions to be anagram:
                -> Both words must have equal number of letters.
                -> Both words have same letters but arrangend in different ways.
            Example:
                HEART and EARTH are anagram.
*/

#include <stdio.h>
#include <string.h>

// Function to sort string
void sortString(char str[50]) {
    int length = strlen(str);

    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (str[i] > str[j]) {
                // Swap characters if they are in the wrong order
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    char string1[50], string2[50];

    // Read strings from user
    printf("Enter first string: ");
    scanf("%s", string1);
    printf("Enter second string: ");
    scanf("%s", string2);

    // Sort both strings
    sortString(string1);
    sortString(string2);

    // Compare the sorted strings and print result
    if (strcmp(string1, string2) == 0)
    {
        printf("Input strings are anargam.", string1, string2);
    }
    else
    {
        printf("Input strings are not anargam.", string1, string2);
    }

    return 0;
}
