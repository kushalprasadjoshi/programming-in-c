/*
WAP to calculate area and perimeter of a circle and print the result.
Take radius as user input.
*/

#include <stdio.h>  // Preprocessor directive

void main() {
    // Declare required variables
    int r;
    float pi = 3.14f;

    // Take required input from user
    printf("Enter radius of circle: ");
    scanf("%d", &r);

    //  Calculate and print area and perimeter
    printf("The area of circle is %f\n", pi * r * r);
    printf("The perimeter of circle is %f\n", 2 * pi * r);
}