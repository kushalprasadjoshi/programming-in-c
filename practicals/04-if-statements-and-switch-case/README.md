# Lab 4: If Statements and Switch Case

## Objective
To introduce participants to the basic of if, else and else if keywords. Introducing else if ladder and nested if statements. Introducing switch case.

---

## Agenda
1. [WAP to find the greatest among 3 numbers.](./01-greates-among-three-numbers.c)
2. [WAP to find if a year is leap or not.](./02-leap-year-or-not.c)
3. [WAP to check whether a number is even or odd.](./03-different-calcualtion-on-even-and-odd.c)
    - If even add 100 to the number.
    - If odd subtract 100 from the number.
4. [Write a program that can perform all arithmetic calculations.](./04-command-line-calculator.c)
    - Also add a default condition.

---

## Requirements
1. **Code Edioter**
2. **C Compiler**
3. **Computer** with required softwares installed.

---

## Theory

### If Statement
If statement is a conditional statement which gets executed when the condition given to it is true.

#### How it works?
The `if` statement evaluates the text inside the parenthesis `()`:
- If the test expression is evaluated true, the statement inside the body of `if` is executed.
- If the test expression is evaluated false, the statement inside the body of `if` is not executed and control is sent to the next line.
- Multiple `else if` statements can be used after `if` to check multiple conditions and execute different lines of code, which is known as an *else if ladder*.
- A default set of code can be set along with `if` or `else if` ladder known as `else`, which gets executed when all the conditions are false.

### Switch Case
If *a large numberof `else if` statements* are needed to write, `switch` case *gives you better way* to handle them.

---

## Experiment 1
```c
/*
WAP to find greatest among a, b and c.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Checking conditions for a to be greatest
    if (a > b && a > c)
    {
        printf("%d is greatest.", a);
    }
    
    // Checking condition for b to be greatest if a is not
    else if (b > c)
    {
        printf("%d is greatest.", b);
    }

    // If both a and b are not greatest the c is greatest
    else
    {
        printf("%d is greatest.", c);
    }
    
    return 0;
}
```

**Output:**
```output
Enter three numbers: 3 5 4
5 is greatest.
```

---

## Experiment 2
```c
/*
WAP to find if a year is leap year or not.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    // Taking input from user
    printf("Enter the year: ");
    scanf("%d", &year);

    // Checking if the year is leap or not.
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}
```

**Output:**
```output
Enter the year: 2024
2024 is a leap year.
```

---

## Experiment 3
```c
/*
WAP to check if a number is even or odd.
-> If even add 100 to the number.
-> If odd subtract 100 from the number.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    // Taking input from user
    printf("Enter the number: ");
    scanf("%d", &n);

    // Condition 1: Checking if the number is even
    if (n % 2 == 0)
    {
        printf("%d is even.\n", n);
        // Adding 100 to number
        printf("So the result after adding 100 is %d", n + 100);
    }

    // Condition 2: If it is not even then it is odd
    else
    {
        printf("%d is odd.\n", n);
        // Adding 100 to number
        printf("So the result after subtracting 100 is %d", n - 100);
    }
      
    return 0;
}
```

**Output:**
```output
Enter the number: 47
47 is odd.
So the result after subtracting 100 is -53
```

---

## Experiment 4
```c
/*
Write a program that can perform all the arithmetic operations (+, -, *, /).
Also add a default statement.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2;
    char op;

    // Taking input from user
    printf("Enter your operation in format of <|operand1 operator operand2|> : ");
    scanf("%f %c%f", &num1, &op, &num2);

    // Using switch case for selecting the required operation
    switch (op)
    {
    case '+':
        printf("= %.2f", num1 + num2);
        break;

    case '-':
        printf("= %.2f", num1 - num2);
        break;

    case '*':
        printf("= %.2f", num1 * num2);
        break;

    case '/':
        printf("= %.2f", num1 / num2);
        break;

    default:
        printf("Your input doesn't match the format.");
        break;
    }

    return 0;
}

```

**Output:**
```output
Enter your operation in format of <|operand1 operator operand2|> : 20001 * 50004
= 1000130004.00
```

---

## Discussion
Basic concept about `if`, `else if` and `else` keywords was gained. Also learned about *nested if* and *else if ladder*. We also learnt about `switch` case which is an alternative to *else-if ladder*.

We write a program to:
- Find greatest number among three numbers.
- Find the leap year or not.
- Identify even and odd numbers and execute different blocks of code for them.
- Simple command line calculator using switch case.

---

## Conclusion
The participants gained confidence in the programs that uses if statements and switch case which made them able ot write programs using these syntaxes.

---
