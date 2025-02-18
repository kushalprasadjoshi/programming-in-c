/*
WAP to find LCM and HCF of two numbers using function.
*/

#include <stdio.h>

// Function to calculate HCF
int calculateHCF(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    return num1;
}

// Function to calculate LCM
int calculateLCM(int num1, int num2)
{
    return (num1 * num2) / calculateHCF(num1, num2);
}

int main(int argc, char const *argv[])
{
    int number1, number2;

    // Input from the user
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Calculate and display HCF and LCM 
    printf("HCF of %d and %d: %d\n", number1, number2, calculateHCF(number1, number2));
    printf("LCM of %d and %d: %d\n", number1, number2, calculateLCM(number1, number2));
    
    return 0;
}
