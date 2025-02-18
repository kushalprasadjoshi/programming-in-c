# Assignmetnt 08: Character and String Functions

## Questions
1. [Convert all first letters of sentence to uppercase in a paragraph.](./01-convert-first-letter-of-sentence-to-upper-case.c)
2. [Count number of words in a sentence.](./02-number-of-words-in-string.c)
3. [Check if a string is palindrome.](./03-check-string-palindrome-or-not.c)
4. [Check if two words are anagram](./04-check-anagram-words.c)
    > Example: HEART and EARTH are anagram words.

---

## Solution of 1
```c
/*
WAP to convert all first letters of sentence to uppercase in paragraph.
*/

#include <stdio.h>
#include <ctype.h>

// Function to capitalize first letter of each sentence
void capitalizeFirstLetter(char *paragraph) {
    int i = 0;

    // Capitalize the first letter of the first sentence
    paragraph[0] = toupper(paragraph[0]);

    while (paragraph[i] != '\0') {
        if (paragraph[i] == '.' || paragraph[i] == '?' || paragraph[i] == '!') {
            // If the current character is a sentence-ending punctuation,
            // capitalize the next character (first letter of the next sentence)
            paragraph[i + 2] = toupper(paragraph[i + 2]);
        }
        i++;
    }
}

int main() {
    char paragraph[100];

    // Take paragraph as input from user
    printf("Enter your paragraph: ");
    gets(paragraph);    // Note: gets() is not recommended due to security issues

    // Capitalize first letters of each sentence and display output
    capitalizeFirstLetter(paragraph);
    printf("Capitalized paragraph:\n");
    puts(paragraph);    // Note: puts() is not recommended due to security issues


    return 0;
}
```

**Output:**
```output
Enter your paragraph: i am Kushal Prasad Joshi. i am from Nepal.
Capitalized paragraph:
I am Kushal Prasad Joshi. I am from Nepal.
```

---

## Solution of 2
```c
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
```

**Output:**
```output
Enter your string: This is a string
The number of words are: 4
```

---

## Solution of 3
```c
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
```

**Output:**
```output
Enter a string: asdfgghjklkjhgfdsa
asdfgghjklkjhgfdsa is not a palindrome
```

---

## Solution of 4
```c
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
```

**Output:**
```output
Enter first string: heart
Enter second string: earth
Input strings are anargam.
```

---
