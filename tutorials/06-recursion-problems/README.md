# Assignment 6: Recursion Problems

## Questions
1.	[WAP to count the number of digits in a number using recursion.](./01-count-number-of-digits.c)
2.	[WAP to find if a number is palindrome or not using recursion.](./02-find-palindrome-or-not.c)
3.	[WAP to find the sum of digits of a number using recursion.](./03-sum-of-digits-of-number.c)
4.	[WAP to calculate n(c,r) using recursion.](./04-calculate-combination.c)

---

## Solution of 1
```c
/*
WAP to count the number of digits in a number using recursion.
*/

#include <stdio.h>

// Function to count digits using recursion
int countDigits(int num)
{
    // Base case: When the number becomes 0
    if (num == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: Divide the number by 10 and call the function
        return 1 + countDigits(num / 10);
    }
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
    printf("Number of digits: %d\n", countDigits(number));
    
    return 0;
}
```

**Output:**
```output
Enter a number: 123456
Number of digits: 6
```

---

## Solution of 2
```c
/*
WAP to find if a number is palindrome or not using recursion.
*/

#include <stdio.h>

// Function to reverse a number using recursion
int reverseNumber(int num)
{
    static int reversedNum = 0;

    // Base case: When the number becomes 0
    if (num == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: Reverse the number and call the function
        reversedNum = reversedNum * 10 + num % 10;
        reverseNumber(num / 10);
        return reversedNum;
    }
}

// Function to check if a number is palindrome
int isPalindrome(int num)
{
    // Call the reverse number function to get the reversed number
    int reversed = reverseNumber(num);

    // Check if the reversed number is equal to the original number
    if (reversed == num)
    {
        return 1; // It's a palindrome
    }
    else
    {
        return 0; // It's not a palindrome
    }
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
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
Enter a number: 1234321
1234321 is a palindrome.
```

---

## Solution of 3
```c
/*
WAP to find sum of digits of a number using recursion.
*/

#include <stdio.h>

// Function to calculate the sum of digits using recursion
int sumOfDigits(int num) {
    // Base case: When the number becomes 0
    if (num == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: Add the last digit and call the function
        return (num % 10) + sumOfDigits(num / 10);
    }
    
}

int main(int argc, char const *argv[])
{
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
    printf("Sum of digits: %d\n", sumOfDigits(number));
    
    return 0;
}
```

**Output:**
```output
Enter a number: 23456
Sum of digits: 20
```

---

## Solution of 4
```c
/*
WAP to calculate nCr using recursion.
*/

#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // Recursive case: Multiply n by factorial of (n-1)
        return n * factorial(n - 1);
    }
}

// Function to calculate nCr using recursion
int nCr(int n, int r)
{
    // Formula for combination: nCr = n! / (r! * (n-r)!)
    int result = factorial(n) / (factorial(r) * factorial(n - r));

    return result;
}

int main(int argc, char const *argv[])
{
    int n, r;

    // Input from user
    printf("Enter the values for n and r in nCr: ");
    scanf("%d%d", &n, &r);

    // Check n is greater than or equal to r and both are positive
    if (n >= r && n >= 0 && r >= 0)
    {
        // Call the funtion and display the result
        printf("%dC%d = %d\n", n, r, nCr(n, r));
    }
    else
    {
        printf("Invalid input. Ensure n >= r and both are non-negative.\n");
    }

    return 0;
}
```

**Output:**
```output
Enter the values for n and r in nCr: 9 4
9C4 = 126
```

---
