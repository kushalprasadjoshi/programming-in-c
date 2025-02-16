/*
Write the given code and note the output.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p;
    p = &a;

    // Print
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("p + 1 = %p\n", p + 1);

    return 0;
}
