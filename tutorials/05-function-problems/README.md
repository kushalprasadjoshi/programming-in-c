# Assignment 05: Function Problems

## Questions
1.	[WAP to find the roots of quadratic equation using function.](./01-roots-of-quardatic-equation.c)
2.	[WAP to find if a number is prime or not using function.](./02-find-prime-or-not.c)
3.	[WAP to count the number of digits in a user-entered number using a function.](./03-count-number-of-digits.c)
4.	[WAP to find the sum of digits of a number.](./04-sum-of-digits-of-number.c)
5.	[WAP to check if a number is palindrome or not.](./05-find-palindrome-or-not.c)
6.	[WAP to find the factorial of a number until the user demands. Make two      separate functions- one to calculate the factorial of the number and the other to ask the user if he would like to continue.](./06-find-factorial-until-user-demands.c)
7.	[WAP to find LCM and HCF of two numbers using function.](./07-hcf-and-lcm.c)
8.	[Write a program to convert a decimal number to binary.](./08-convert-decimal-to-binary.c)

---

## Solution of 1
```c
/*
WAP to find roots of quardatic equation using function.
*/

#include <stdio.h>
#include <math.h>

// Function to calculate the roots of quardatic equation
void findRoots(float a, float b, float c)
{
    float discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check nature of roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root1 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        printf("Roots are different and conjugate of each other.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main(int argc, char const *argv[])
{
    float a, b, c;

    // Input coefficients from user
    printf("Enter coefficients (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    // Call the function to find roots
    findRoots(a, b, c);

    return 0;
}
```

**Output:**
```output
Enter coefficients (a, b, c): 1 2 3
Roots are different and conjugate of each other.
Root1 = -1.00 + 1.41i
Root2 = -1.00 - 1.41i
```

---

## Solution of 2
```c
/*
WAP to find a number is prime or not using function.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // 1 and numbers less than 1 are not prime
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false; // If num is divisible by any number from 2 to sqrt(num), it is not prime
        }
    }

    return true; // If no divisors found, the number is prime
}

int main(int argc, char const *argv[])
{
    int number;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime using isPrime function
    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
```

**Output:**
```output
Enter a number: 97
97 is a prime number.
```

---

## Solution of 3
```c
/*
WAP to count the number of digits in a user entered number using function.
*/

#include <stdio.h>

// Function to count the number of digits in given number
int countDigits(int num) {
    int count = 0;
    
    while (num != 0)
    {
        num /= 10;
        count++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the countDigits function to get the number of digits
    int digitCount = countDigits(number);

    // Display the result
    printf("Number of digits in %d is: %d\n", number, digitCount);

    return 0;
}
```

**Output:**
```output
Enter a number: 12345
Number of digits in 12345 is: 5
```

---

## Solution of 4
```c
/*
WAP to find the sum of digits of number using function.
*/

#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and dispaly the sum of digits 
    printf("Sum of digits: %d\n", sumOfDigits(number));
    
    return 0;
}
```

**Output:**
```output
Enter a number: 12345   
Sum of digits: 15
```

---

## Solution of 5
```c
/*
WAP to check if a number is palindrome is not.
*/

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num)
{
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and display if the number is palindrome
    if (isPalindrome(number))
    {
        printf("%d is a palindrome.\n", number);
    }
    else
    {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
```

**Output:**
```output
Enter a number: 12321
12321 is a palindrome.
```

---

## Solution of 6
```c
/*
WAP to find factorial of a number until the user demands.
Make two seperate functions:
One to calculate the factorial of the number and another to ask the user if he would like to continue.
*/

#include <stdio.h>

// Function to calculate factorial
long long calculateFactorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * calculateFactorial(num - 1);
    }
}

// Function to interact with user
int continueCalculation() {
    char choice;

    printf("Do you want to calculate factorial? (y/n): ");
    scanf(" %c", &choice);

    return (choice == 'y' || choice == 'Y');
}

int main(int argc, char const *argv[])
{
    int number;

    do
    {
        // Input from the user
        printf("Enter a number to find factorial: ");
        scanf("%d", &number);

        // Calculate and display factorial
        printf("Factorial of %d: %lld\n", number, calculateFactorial(number));

    } while (continueCalculation());
    
    printf("Program terminated.\n");

    return 0;
}
```

**Output:**
```output
Enter a number to find factorial: 4
Factorial of 4: 24
Do you want to calculate factorial? (y/n): y
Enter a number to find factorial: 5
Factorial of 5: 120
Do you want to calculate factorial? (y/n): n
Program terminated.
```

---

## Solution of 7
```c
/*
WAP to find LCM and HCF of two numbers using function.
*/

#include <stdio.h>

// Function to calculate HCF
int calculateHCF(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    return num1;
}

// Function to calculate LCM
int calculateLCM(int num1, int num2)
{
    return (num1 * num2) / calculateHCF(num1, num2);
}

int main(int argc, char const *argv[])
{
    int number1, number2;

    // Input from the user
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Calculate and display HCF and LCM 
    printf("HCF of %d and %d: %d\n", number1, number2, calculateHCF(number1, number2));
    printf("LCM of %d and %d: %d\n", number1, number2, calculateLCM(number1, number2));
    
    return 0;
}
```

**Output:**
```output
Enter first number: 12
Enter second number: 4
HCF of 12 and 4: 4
LCM of 12 and 4: 12
```

---

## Solution of 8
```c
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
```

**Output:**
```output
Enter a decimal number: 16
Binary Equivalent: 10000
```

---
