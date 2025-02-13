/*
WAP to input two numbers from user and calculate sum, difference, multiplication, division and remainder
*/

#include <stdio.h> // Preprocessor directive

int main()  // Program's main function starts from here

{   // Start

    int num1, num2; // Taking two integer variables

    printf("Enter two numbers: ");  // Displaying the notice

    scanf("%d%d", &num1, &num2); // Taking input from user and storing them in variables

    printf("Sum = %d\n", num1 + num2);  // Displaying Sum

    printf("Difference = %d\n", num1 - num2);  // Displaying Difference

    printf("Multiplication = %d\n", num1 * num2);  // Displaying Multiplication

    printf("Divison = %d\n", num1 / num2);  // Displaying Divison

    printf("Remainder = %d\n", num1 % num2);  // Displaying Remainder

    return 0; // Returning value
}
