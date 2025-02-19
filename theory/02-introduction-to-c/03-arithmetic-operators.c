#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 5; // Initialize a with 5
    b = 3; // Initialize b with 3

    // Addition of a and b
    printf("a + b = %d\n", a + b);

    // Subtraction of b from a
    printf("a - b = %d\n", a - b);

    // Multiplication of a and b
    printf("a * b = %d\n", a * b);

    // Integer division of a by b
    printf("a / b = %d\n", a / b);

    // Remainder of a divided by b
    printf("a %% b = %d\n", a % b);

    return 0; // Return 0 to indicate successful execution
}
