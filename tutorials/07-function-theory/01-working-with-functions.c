// Genearally functions are defined at top, called inside main and defiend at end

#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int m = 2, n = 3;

    // Function call
    int result = add(m, n);

    return 0;
}

// Function defination
int add(int a, int b) {
    return a + b;
}