# Lab 07: Functions in C Programming

## Objective
To introduce participants the basic of functions in C programming.

---

## Agenda
1. [WAP to calculate C(n,r) using function.](./01-finding-combination.c)
2. [WAP to print fibonacci series up to n terms using function.](./02-fibonacci-series-using-recursion.c)
3. [Print numbers in range from m to n and replace some numbers by condition.](./03-print-numbers-in-range-with-some-replacements.c)
4. [WAP to check a number is Armstrong or not using recursion.](./04-checking-armstrong-number-using-recursion.c)

---

## Requirements
1. **Code Edioter**
2. **C Complier**
3. **Computer** with required softwares installed.

---

## Theory

### Functions
Functions in C programming are basic building blocks that provides modularity, reusability and efficient program design.

#### What is function?
A function is a set of statements that performs a specific task.

#### Advantages of using function
- Modularity
- Reusability
- Readability
- Maintainability

#### Types of function
- Standard Library Functions
- User Defined Funtions  
    - With Arguments and With Return Value
    - With Arguments and Without Return Value
    - Without Arguments and With Return Value
    - Without Arguments and Without Return Value

### Recursion
Recursion is a special type of function which call itself directly or indirectly and solve problems by dividing it to smaller, similar sub-problems.

#### How Recursion Works?
A recursion has two cases:
- Base case: Condition at which function stops calling itself.
- Recursive case: Condition at which function call it's copy.

#### Advantages of Recursion
- Provides a clean and elegent way to write codes.
- Solve some inherently recursive problems.

#### Disadvantages of Recursion
- Leads to stack overflow if not handled properly.
- It may have higer resource and time usage as compared to iterative solutions.

---

## Experiment 1
```c
/*
WAP to calculate C(n,r) using function
HINT:
    nCr = n! / r! * (n - r)!
*/

#include <stdio.h>

// Write function to find factorial
long long factorial(int n)
{
    long long fact = 1;

    // Use loop to find factorial
    for (; n != 0; n--)
    {
        fact *= n;
    }

    return fact; // Return factorial of number
}

int main(int argc, char const *argv[])
{
    int n, r;
    long long nCr;

    // Take input
    printf("Enter value of n and r: ");
    scanf("%d%d", &n, &r);

    // Calculate nCr
    if (r >= 0 && n >= r)
    {
        // If true nCr is possible
        nCr = factorial(n) / (factorial(r) * factorial(n - r));

        // Print the result
        printf("The combination, C(%d, %d) is %lld", n, r, nCr);
    }
    else
    {
        printf("Your input is wrong. (r >= 0 and n >= r)");
    }

    return 0;
}
```

**Output:**
```output
Enter value of n and r: 5 3
The combination, C(5, 3) is 10
```

---

## Experiment 2
```c
/*
WAP to print fibonacci series upto n terms using recursion.
*/

#include <stdio.h>

// Declare required function
int fib(int n, int a, int b);

int main(int argc, char const *argv[])
{
    int n, x = 0, y = 1;

    // Read number of terms
    printf("Enter the number of terms in fibonacci series(> 2): ");
    scanf("%d", &n);

    printf("The terms in fibonacci series are:\n");
    // Call fib function to print terms
    fib(n, 0, 1);

    return 0;
}

// Defination of fib function
int fib(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d\t", a);
        fib(n - 1, b, a + b);
    }
}
```

**Output:**
```output
Enter the number of terms in fibonacci series(> 2): 7
The terms in fibonacci series are:
0       1       1       2       3       5       8
```

---

## Experiment 3
```c
/*
Print numbers in range from m to n.
If number is divisible by 3, print "dbt".
If number is divisible by 5, print "dbf".
If number is divisible by both 5 and 3, print "dbt&f".
*/

#include <stdio.h>

// Function to check if the number is divisible by 5
int divisibleByFive(int n)
{
    return (n % 5 == 0);
}

// Function to check if the number is divisible by 3
int divisibleByThree(int n)
{
    return (n % 3 == 0);
}

int main(int argc, char const *argv[])
{
    int m, n;

    // Take input from user
    printf("Enter the range: ");
    scanf("%d%d", &m, &n);

    // Check if m is greater
    if (m > n)
    {
        // Swap values
        m = m + n;
        n = m - n;
        m = m - n;
    }
    
// Use iteration to do things continously
    for (; m <= n; m++)
    {
        if (divisibleByFive(m) && divisibleByThree(m))
        {
            printf("dbt&f\t");
        }

        else if (divisibleByFive(m))
        {
            printf("dbf\t");
        }
        else if (divisibleByThree(m))
        {
            printf("dbt\t");
        }
        else
        {
            printf("%d\t", m);
        }
    }

    return 0;
}
```

**Output:**
```output
Enter the range: 100 30
dbt&f   31      32      dbt     34      dbf     dbt     37      38      dbt     dbf     41      dbt     43      44      dbt&f   46      47      dbt     49      dbf     dbt     52      53      dbt     dbf    56       dbt     58      59      dbt&f   61      62      dbt     64      dbf     dbt     67      68      dbt     dbf     71      dbt     73      74      dbt&f   76      77      dbt     79      dbf     dbt    82       83      dbt     dbf     86      dbt     88      89      dbt&f   91      92      dbt     94      dbf     dbt     97      98      dbt     dbf
```

---

## Experiment 4
```c
/*
WAP to check a number is Armstrong or not using recursion.
HINT:
    Any number is Armstrong number if:
        The sum of each digits raising to the power of the count of digits in number is the number itself.
        For example:
            Let, the given number is 153
                where,
                    count of digits = 3
                So, calculating sum of digits raising each to the power of count of digits
                    i.e. 1^3 + 5^3 + 3^3
                        = 153, the number itself
            So the number 153 is an Armstrong number.
*/

#include <stdio.h>
#include <math.h>

// Declare required functions here
int armstrong(int n, int count);

int main(int argc, char const *argv[])
{
    int n, x, count = 0;

    // Take the input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Get the value of count
    for (int i = n; i != 0; i /= 10)
    {
        count++;
    }

    x = armstrong(n, count); // Call armstrong function to check armstrong number

    // Check the condition for Armstrong number
    if (x == n)
    {
        printf("%d is an Armstrong number.", n);
    }
    else
    {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}

// Defination of armstrong function
int armstrong(int n, int count)
{
    /*
    We are declaring these variables only for the commented region of code in else block
        int y, sum = 0;
        double p;
    */
   
    // Base case
    if (n == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case
        return pow(n % 10, count) + armstrong((n / 10), count);
        /*
        This one line is used instead of the following code:
            y = n % 10;
                n = n / 10;
            p = pow(y, count);      // Pow function always return double value
            sum = sum + (int)p; // Convert to int while adding to sum
            return sum + armstrong(n, count);
        */
    }
}
```

**Output:**
```output
Enter a number: 407
407 is an Armstrong number.
```

---

## Discussion
Basic concept about the functions and recursion was gained.

Following programming is done to enhance understanding of functions:
- Find combination using function.
- Find fibonacci series using recursion.
- Print numbers in range with some replacements.
- Check Armstrong number using recursion.

---

## Conclusion
The participants gained confidence in the programs that uses functions or write some programs using userdefined function, which enhance the understandability of participants on functions.

---
