/*
WAP to add two numbers.
*/

#include <stdio.h>  // Preprocessor directive

void main() {
    int a, b, c;    // Declaring variables

    // Taking input from user
    printf("Enter two numbers: ");  // Display notice
    scanf("%d%d", &a, &b);  // Take the values

    c = a + b;  // Calculate the sum

    printf("Sum = %d", c);  // Display the sum
}