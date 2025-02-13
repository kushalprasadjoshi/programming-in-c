/*
WAP to find size of datatypes.
*/

#include <stdio.h>  // Including standard input and output functions

int main()
{
    // sizeof is a function that returns size of datatype
    printf("Size of (int) = %d\n", sizeof(int));
    printf("Size of (char) = %d\n", sizeof(char));
    printf("Size of (short) = %d\n", sizeof(short));
    printf("Size of (double) = %d\n", sizeof(double));
    printf("Size of (float) = %d\n", sizeof(float));
    printf("Size of (long) = %d\n", sizeof(long));
    printf("Size of (long long) = %d\n", sizeof(long long));

    return 0;
}
