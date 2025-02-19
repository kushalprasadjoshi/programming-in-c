#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 2; // Assign value 2 to a
    b = 3; // Assign value 3 to b

    // Bitwise AND operation
    printf("a & b = %d\n", a & b);
    // Bitwise OR operation
    printf("a | b = %d\n", a | b);
    // Bitwise XOR operation
    printf("a ^ b = %d\n", a ^ b);
    // Bitwise NOT operation
    printf("~a = %d\n", ~a);
    // Right shift operation
    printf("a >> 1 = %d\n", a >> 1);
    // Left shift operation
    printf("a << 1 = %d\n", a << 1);

    return 0;
}
