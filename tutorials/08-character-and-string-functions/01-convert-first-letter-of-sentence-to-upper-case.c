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

