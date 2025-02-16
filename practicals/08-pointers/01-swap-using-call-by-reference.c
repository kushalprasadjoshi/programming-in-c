/*
WAP to swap using functions.
Pass address of two number as arguments to the function.
*/

#include <stdio.h>

// Function to swap two numbers using call by reference
void swapValues(int *value1, int *value2)
{
    *value1 = *value1 + *value2;
    *value2 = *value1 - *value2;
    *value1 = *value1 - *value2;
}

int main(int argc, char const *argv[])
{
    int a, b;

    // Read values from user
    printf("Enter two numbers to swap: ");
    scanf("%d%d", &a, &b);

    // Print values before swapping
    printf("Before swapping: %d and %d\n", a, b);

    // Call swapValue function to swap values
    swapValues(&a, &b);

    // Print values after swapping
    printf("After swapping: %d and %d\n", a, b);

    return 0;
}
