# Lab 05: Loops in C Programming

## Objective
To introduce participants the basics of *while*, *do-while* and *for* loops in C.

---

## Agenda
1. [WAP to print natural numbers from m to n (m < n).](./01-print-natural-numbers-in-range.c)
2. [WAP to find if a number is prime or not.](./02-number-is-prime-or-not.c)
3. [WAP to find the sum of digits of user input number until it is less than 10](./03-sum-of-digits-until-single-digit.c)

---

## Requirements
1. **Code Edioter**
2. **C Compiler**
3. **Computer** with requried softwares installed.

---

## Theory

### Loops
In C programming, loops are used to repeatedly execute a block of code. There are three main types of loops: `for`, `while` and `do-while`.

#### 1. For Loop
This loop executes a block of code for a fixed number of times.

**Syntax:**
```c
for (/*initialization*/; /*condition*/; /*update*/) {
    // Code to be executed
}
```

#### 2. While Loop
This loop executes until a certain condition is met to fail.

**Syntax:**
```c
while (/*condition*/) {
    // Code to be executed
}
```

#### 3. Do-While Loop
This loop executes at least once and run till the condition fails.

**Syntax:**
```c
do {
    // Code to be executed
} while (/*condition*/);

---

## Experiment 1
```c
/*
WAP to print natural numbers from m to n, where m < n.
Also find the sum and average of numbers.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, diff, sum = 0;

    // Taking input from user
    printf("Enter the range of numbers: ");
    scanf("%d%d", &m, &n);

    // Swapping values of m and n if m > n
    if (m > n)
    {
        m = m + n;
        n = m - n;
        m = m - n;
    }
    diff = n - m + 1;

    printf("The natural numbers in range are:\n");
    for (; m <= n; m++)
    {
        printf("%d\t", m); // Printing number
        sum += m;   // Adding the number to sum
    }
    
    printf("\nThe sum of numbers is %d", sum);
    printf("\nThe average of numbers is %d", sum / diff);
    
    return 0;
}
```

**Output:**
```output
Enter the range of numbers: 1 100
The natural numbers in range are:
1       2       3       4       5       6       7       8       9       10      11      12      13      14      15      16      17      18      19      20      21      22      23      24      25      26     27       28      29      30      31      32      33      34      35      36      37      38      39      40      41      42      43      44      45      46      47      48      49      50      51      52     53       54      55      56      57      58      59      60      61      62      63      64      65      66      67      68      69      70      71      72      73      74      75      76      77      78     79       80      81      82      83      84      85      86      87      88      89      90      91      92      93      94      95      96      97      98      99      100
The sum of numbers is 5050
The average of numbers is 50
```

---

## Experiment 2
```c
/*
WAP to find if a number is prime or not.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    // Taking input from user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Checking the number using loop for prime
    for (int i = 2; i < n / 2; i++)
    {
        // Checking the condition that if any number divides input number exactly
        if (n % i == 0)
        {
            printf("%d is not prime.", n);
            goto end;   // If any number > 1 divides a number it is not prime
        }
        
    }
    printf("%d is prime", n);   // If no number > 1 divides a number it is prime

    end:
        printf("\nEnding program...");

    return 0;
}
```

**Output:**
```output
Enter the number: 93
93 is not prime.
Ending program...
```

---

## Experiment 3
```c
/*
WAP to find sum of digits of user input number until it is a single digit
*/

#include <stdio.h>

// Function to find sum of digits in number
int sumOfDigits(int n) {
    int rem, sum = 0;

    // Finding sum of digits in n
    for (; n != 0; n /= 10)
    {
        rem = n % 10;
        sum += rem;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int n;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling sumOfDigits function until the number < 9
    while (n > 9)
    {
        n = sumOfDigits(n);
    }

    // Printing final result
    printf("The final sum of digits is %d", n);

    return 0;
}
```

**Output:**
```output
Enter a number: 123456
The final sum of digits is 3
```

---

## Discussion
Basic concept about `for`, `while` and `do-while` loops was gained.

Following types of programming was done to clear concepts:
- Printing natural numbers from m to n and finding sum and average.
- Finding prime numbers.
- Finding sum of user input number's digits until it becomes a single digit.

---

## Conclusion
The participants gained confidence in the programs that uses loops which made them able ot write program using loops.

---
