/*
WAP to ask two numbers from user and print them
*/

#include <stdio.h>  // Preprocessor directive

int main()  // Starting main function here

{   // Start of a program

    int num1, num2; // Declaration of variables

    printf("Enter two numbers: ");  // Displaying message

    scanf("%d%d", &num1, &num2);    // Taking user's input

    printf("The numbers entered are : %d and %d", num1, num2);  // Displaying the numbers entered by user

    return 0;   // Returning value to OS

}   // End of program
