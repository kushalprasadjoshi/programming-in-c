/*
Let x = 5, y = 10, z = 20, a = 200, b= 2000, c = 3000
Print result as:
x       y       z       =       |5      |10     |20
a       b       c       =       |200    |2000   |3000

x       y       z       =       5|      10|     20|
a       b       c       =     200|    2000|   3000|
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5, y = 10, z = 20;
    int a = 200, b = 2000, c = 3000;

    // Printing the given format
    printf("x\ty\tz\t=\t|%-9d|%-9d|%-9d\n", x, y, z);
    printf("a\tb\tc\t=\t|%-9d|%-9d|%-9d\n", a, b, c);
    printf("\n");
    printf("x\ty\tz\t=%9d|%9d|%9d|\n", x, y, z);
    printf("a\tb\tc\t=%9d|%9d|%9d|\n", a, b, c);

    return 0;
}
