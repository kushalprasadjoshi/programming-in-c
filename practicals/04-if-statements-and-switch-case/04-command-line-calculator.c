/*
Write a program that can perform all the arithmetic operations (+, -, *, /).
Also add a default statement.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2;
    char op;

    // Taking input from user
    printf("Enter your operation in format of <|operand1 operator operand2|> : ");
    scanf("%f %c%f", &num1, &op, &num2);

    // Using switch case for selecting the required operation
    switch (op)
    {
    case '+':
        printf("= %.2f", num1 + num2);
        break;

    case '-':
        printf("= %.2f", num1 - num2);
        break;

    case '*':
        printf("= %.2f", num1 * num2);
        break;

    case '/':
        printf("= %.2f", num1 / num2);
        break;

    default:
        printf("Your input doesn't match the format.");
        break;
    }

    return 0;
}
