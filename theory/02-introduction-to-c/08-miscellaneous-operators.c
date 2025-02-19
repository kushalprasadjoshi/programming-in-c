#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2; // Declare an integer variable 'a' and initialize it with the value 2

    // Print the size of the variable 'a' in bytes
    printf("Size of a = %lu\n", sizeof(a));
    
    // Print the memory address of the variable 'a'
    printf("&a = %p\n", &a);
    
    // Print the value stored at the memory address of 'a'
    printf("*(&a) = %d\n", *(&a));

    return 0; // Return 0 to indicate successful execution
}
