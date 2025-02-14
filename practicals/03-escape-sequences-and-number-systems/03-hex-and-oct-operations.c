/*
WAP to add to hex and oct numbers.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hex1, hex2;
    int oct1, oct2;

    // For two hex number addition
    printf("Enter two hex numbers: ");
    scanf("%x%x", &hex1, &hex2);
    printf("Sum = %x\n", hex1 + hex2);

    // For two oct number addition
    printf("Enter two oct numbers: ");
    scanf("%o%o", &oct1, &oct2);
    printf("Sum = %o\n", oct1 + oct2);

    return 0;
}
