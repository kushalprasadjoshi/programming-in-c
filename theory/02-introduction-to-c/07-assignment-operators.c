#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    // Assign 2 to a and print the result
    printf("a = 2 = %d\n", a = 2);
    // Add 2 to a and print the result
    printf("a += 2 = %d\n", a += 2);
    // Subtract 2 from a and print the result
    printf("a -= 2 = %d\n", a -= 2);
    // Multiply a by 2 and print the result
    printf("a *= 2 = %d\n", a *= 2);
    // Divide a by 2 and print the result
    printf("a /= 2 = %d\n", a /= 2);
    // Get the remainder of a divided by 2 and print the result
    printf("a %%= 2 = %d\n", a %= 2);
    // Right shift a by 2 bits and print the result
    printf("a >>= 2 = %d\n", a >>= 2);
    // Left shift a by 2 bits and print the result
    printf("a <<= 2 = %d\n", a <<= 2);
    // Perform bitwise AND on a with 2 and print the result
    printf("a &= 2 = %d\n", a &= 2);
    // Perform bitwise OR on a with 2 and print the result
    printf("a |= 2 = %d\n", a |= 2);

    return 0;
}
