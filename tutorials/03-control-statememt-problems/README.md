# Assignment 03: Control Statement Problems

## Questions
1. Calculate nCr = n! / (n! (n - r)!)
2. WAP to print even numbers within range between m and n.

---

## Solution of 1
```c
/*
Calculate nCr = n! / (n! (n - r)!)
*/

#include <stdio.h>

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main(int argc, char const *argv[])
{
    int n, r;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    int nCr = fact(n) / (fact(r) * fact(n - r));
    printf("%dC%d = %d\n", n, r, nCr);

    return 0;
}
```

**Output:**
```output
Enter the value of n and r: 5 3
5C3 = 10
```

---

## Solution of 2
```c
/*
WAP to print even numbers within range between m and n.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;

    printf("Enter the value of m and n: ");
    scanf("%d %d", &m, &n);

    printf("Even numbers between %d and %d are: ", m, n);
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
```

**Output:**
```output
Enter the value of m and n: 50 100
Even numbers between 50 and 100 are: 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100
```

---
