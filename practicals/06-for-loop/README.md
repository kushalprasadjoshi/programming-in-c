# Lab 06: For Loop in C Programming

## Objective
To introduce participants the basic of for loop.

---

## Agenda
1. [WAP to print odd numbers in a range in ascending order. Also find sum.](./01-print-odd-numbers-in-range.c)
2. [WAP to print prime numbers in range from m to n.](./02-factorial.c)
3. [WAP to find factorial of a number.](./03-print-prime-numbers-in-range.c)

---

## Requirements
1. **Code Edioter**
2. **C Compiler**
3. **Computer** with required softwares installed.

---

## Theory

### For Loop
This loop executes a block of code for a fixed number of times.

**Syntax:**
```c
for (/*initialization*/; /*condition*/; /*update*/) {
    // Code to be executed
}
```

---

## Experiment 1
```c
/*
WAP to print odd numbers in a range in ascending order.
Also find thd sum.
Take  m and n as input from user.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, sum = 0;

    // Take user input
    printf("Enter the range : ");
    scanf("%d%d", &m, &n);

    // Check if m > n
    if (m > n)
    {
        // If true swap values of m and n
        m = m + n;
        n = m - n;
        m = m - n;
    }

    printf("The odd numbers in range from %d to %d are:\n", m, n);
    // Use iteration for continous printing
    for (; m <= n; m++)
    {
        // Check if the number is odd
        if (m % 2 != 0)
        {
            printf("%d\t", m);
            sum += m;
            m++;
        }
    }
    // Print sum
    printf("\nThe sum of odd numbers in range is %d", sum);
    
    return 0;
}
```

**Output:**
```output
Enter the range : 100 50
The odd numbers in range from 50 to 100 are:
51      53      55      57      59      61      63      65      67      69      71      73      75      77      79      81      83      85      87      89      91      93      95      97      99
The sum of odd numbers in range is 1875
```

---

## Experiment 2
```c
/*
WAP to find factorial of a number.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    long long fact = 1;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use iteration to find factorial
    for (; n != 0; n--)
    {
       fact *= n;
    }
    
    // Print result
    printf("The factorial of entered number is %lld", fact);
    
    return 0;
}
```

**Output:**
```output
Enter a number: 7
The factorial of entered number is 5040
```

---

## Experiment 3
```c
/*
WAP to print prime numbers in range from m to n.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, count;

    // Take user input
    printf("Enter the range : ");
    scanf("%d%d", &m, &n);

    // Check if m > n
    if (m > n)
    {
        // If true swap values of m and n
        m = m + n;
        n = m - n;
        m = m - n;
    }

    printf("The prime numbers in range from %d to %d are:\n", m, n);
    // Use iteration for continous printing
    for (int i = m; i <= n; i++)
    {
        count = 0; // Format count to zero

        // Check if the number is prime
        for (int j = 1; j <= i; j++)
        {
            // Check if any number is factor of number or not
            if (i % j == 0)
            {
                count++; // Count the number of factors
            }
        }

        // If count of factors is 2 then the number is prime
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
```

**Output:**
```output
Enter the range : 100 30
The prime numbers in range from 30 to 100 are:
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
```

---

## Discussion
Basic concept about for loop was gained.

Following programs were practiced to gain the concept of for loop:
- Printing odd numbers in range.
- Printing prime numbers in range.
- Finding factorial.

---

## Conclusion
The participants gained confidence in the prograns that uses for loop, which made them able to write programs using for loop.

---