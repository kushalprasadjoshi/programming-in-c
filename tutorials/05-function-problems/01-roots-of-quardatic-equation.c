/*
WAP to find roots of quardatic equation using function.
*/

#include <stdio.h>
#include <math.h>

// Function to calculate the roots of quardatic equation
void findRoots(float a, float b, float c)
{
    float discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check nature of roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root1 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        printf("Roots are different and conjugate of each other.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main(int argc, char const *argv[])
{
    float a, b, c;

    // Input coefficients from user
    printf("Enter coefficients (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    // Call the function to find roots
    findRoots(a, b, c);

    return 0;
}
