#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 5; // Assign value 5 to variable a
    b = 3; // Assign value 3 to variable b

    // Print the result of the equality comparison (a == b)
    printf("a == b = %d\n", a == b);
    // Print the result of the inequality comparison (a != b)
    printf("a != b = %d\n", a != b);
    // Print the result of the less than comparison (a < b)
    printf("a < b = %d\n", a < b);
    // Print the result of the greater than comparison (a > b)
    printf("a > b = %d\n", a > b);
    // Print the result of the greater than or equal to comparison (a >= b)
    printf("a >= b = %d\n", a >= b);
    // Print the result of the less than or equal to comparison (a <= b)
    printf("a <= b = %d\n", a <= b);

    return 0; // Return 0 to indicate successful execution
}
