/*
WAP to input sides of traingle and find its area.
*/

// Preprocessor directives
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declare required variables
    float a, b, c;    
    float s, area;

    // Take input from user
    printf("Enter the sides of a traingle: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2.0;  // Calculate semi-perimeter
    area = sqrt(s * (s-a) * (s-b) *(s-c));  // Calculate area

    printf("The area of traingle is %f", area); // Print area

    return 0;
}