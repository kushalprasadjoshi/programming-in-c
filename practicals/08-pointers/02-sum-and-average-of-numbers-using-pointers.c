/*
Read a 1D array of 10 integer elements using pointer notation and find sum and average of the elements.
*/

#include <stdio.h>

// Function to find sum of numbers using pointer notation
int sumOfIntegers(int *pointer)
{
    int sum = 0;
    // Use for loop to access the elements sequencely
    for (int i = 0; i < 10; i++)
    {
        sum += *(pointer + i);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int integers[10];

    // Read integers from user
    printf("Enter any 10 numbers to find sum: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", integers + i);
    }

    // Call sumOfIntegers function to find sum and print output
    printf("The sum is %d\n", sumOfIntegers(integers));
    printf("The average is %f\n", sumOfIntegers(integers) / (float) 10);

    return 0;
}
