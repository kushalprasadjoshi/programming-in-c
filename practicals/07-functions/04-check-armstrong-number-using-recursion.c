/*
WAP to check a number is Armstrong or not using recursion.
HINT:
    Any number is Armstrong number if:
        The sum of each digits raising to the power of the count of digits in number is the number itself.
        For example:
            Let, the given number is 153
                where,
                    count of digits = 3
                So, calculating sum of digits raising each to the power of count of digits
                    i.e. 1^3 + 5^3 + 3^3
                        = 153, the number itself
            So the number 153 is an Armstrong number.
*/

#include <stdio.h>
#include <math.h>

// Declare required functions here
int armstrong(int n, int count);

int main(int argc, char const *argv[])
{
    int n, x, count = 0;

    // Take the input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Get the value of count
    for (int i = n; i != 0; i /= 10)
    {
        count++;
    }

    x = armstrong(n, count); // Call armstrong function to check armstrong number

    // Check the condition for Armstrong number
    if (x == n)
    {
        printf("%d is an Armstrong number.", n);
    }
    else
    {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}

// Defination of armstrong function
int armstrong(int n, int count)
{
    /*
    We are declaring these variables only for the commented region of code in else block
        int y, sum = 0;
        double p;
    */
   
    // Base case
    if (n == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case
        return pow(n % 10, count) + armstrong((n / 10), count);
        /*
        This one line is used instead of the following code:
            y = n % 10;
                n = n / 10;
            p = pow(y, count);      // Pow function always return double value
            sum = sum + (int)p; // Convert to int while adding to sum
            return sum + armstrong(n, count);
        */
    }
}
