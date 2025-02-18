/*
WAP to find factorial of a number until the user demands.
Make two seperate functions:
One to calculate the factorial of the number and another to ask the user if he would like to continue.
*/

#include <stdio.h>

// Function to calculate factorial
long long calculateFactorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * calculateFactorial(num - 1);
    }
}

// Function to interact with user
int continueCalculation() {
    char choice;

    printf("Do you want to calculate factorial? (y/n): ");
    scanf(" %c", &choice);

    return (choice == 'y' || choice == 'Y');
}

int main(int argc, char const *argv[])
{
    int number;

    do
    {
        // Input from the user
        printf("Enter a number to find factorial: ");
        scanf("%d", &number);

        // Calculate and display factorial
        printf("Factorial of %d: %lld\n", number, calculateFactorial(number));

    } while (continueCalculation());
    
    printf("Program terminated.\n");

    return 0;
}
