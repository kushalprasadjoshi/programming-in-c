/*
WAP to find simple interest and compound interest on a sum.
Also find difference between them.
Hint:
    SI = P * T * R / 100
    CI = P * pow((1 + R / 100), T)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int P, T, R;

    // Taking input from user
    printf("Enter Principle(in rupees), Time(in year) and Rate of interest(in percent): ");
    scanf("%d%d%d", &P, &T, &R);

    // Finding simple interest
    float SI = P * T * R / 100.0;

    // Finding compound interest
    float CI = P * pow((1 + R / 100.0), T);

    // Printing results
    printf("Simple interest: %.2f\n", SI);
    printf("Compound interest: %.2f\n", CI);
    printf("Difference in interest: %.2f\n", CI - SI);

    return 0;
}
