/*
WAP to swap two numbers without using third temporary variable.
*/

#include <stdio.h>  // Preprocessor directive

int main(int argc, char const *argv[])
{
    int a, b;   // Declare required variables

    // Take input from user
    printf("Enter two numbers: ");  // Display notice
    scanf("%d%d", &a, &b);  // Scan and store inputs in variables

    printf("The numbers before swapping : %d and %d\n", a, b);  // Print before swapping

    // Method of swapping using third temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The numbers after swapping : %d and %d\n", a, b);  // Print after swapping

    return 0;
}
