#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 1; // Assign 1 to a (true)
    b = 0; // Assign 0 to b (false)

    // Logical AND operation
    printf("a && b = %d\n", a && b); // 1 && 0 = 0 (false)

    // Logical OR operation
    printf("a || b = %d\n", a || b); // 1 || 0 = 1 (true)

    // Logical NOT operation
    printf("!a = %d\n", !a); // !1 = 0 (false)
    printf("!b = %d\n", !b); // !0 = 1 (true)

    return 0;
}
