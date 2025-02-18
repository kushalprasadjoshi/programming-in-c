/*
WAP to convert a decimal number to binary number.
*/

#include <stdio.h>

// Function to calculate decimal to binary
void decimalToBinary(int decimal)
{
    if (decimal == 0)
    {
        printf("Binary equivalent: 0\n");
        return;
    }

    int binary[32]; // Assuming 32-bit integer
    int i = 0;

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary Equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main(int argc, char const *argv[])
{
    int decimalNumber;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert and display binary equivalent
    decimalToBinary(decimalNumber);

    return 0;
}
