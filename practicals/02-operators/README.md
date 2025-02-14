
# Lab 02: Operators in C Programming

## Objective 
To introduce participants to the basic of operators used in C-programming, enabling them to understand and write simple programs using fundamental operators concepts.

---

## Agenda
1. [Calculate simple and compound interest and difference between them.](./01-simple-and-compound-interest.c)  
**Hint:** 
$$
SI = \frac{P \times R \times T}{100}, CI = P \left(1 + \frac{R}{100}\right)^T
$$
2. [Find the sum of digits of a 4-digit number (without loops).](./02-sum-of-digits-of-4-digit-number.c)
3. [Swap two variables using a third variable.](./03-swap-two-variables-using-third-variable.c)
4. [Swap two variables without using a third variable.](./04-swap-two-variables-without-using-third-variable.c)

---

## Requirements
1. **Code Edioter** (e.g. VS Code)  
2. **C Compiler** (e.g. minGW)
3. **Computer** with required softwares installed.

---

## Theory

### Operators in C
The operators are types of symbols that informs a compiler for performing some specific logical or mathematical calculations. The operator serve as a foundation of the programming languages. Thus, the overall functionality of C programming remains incomplete if we don't use the operators.

### Operator Types  
#### By Number of Operands:  
- **Unary**: Operate on a single operand (`++a`, `--b`).  
- **Binary**: Require two operands (`a + b`, `a > b`).  
- **Ternary**: Conditional operator (`condition ? true_expr : false_expr`).  

#### By Function:  
| Operator Type       | Examples                     | Purpose                          |
|----------------------|------------------------------|----------------------------------|
| **Arithmetic**       | `+`, `-`, `*`, `/`, `%`      | Perform mathematical operations. |
| **Relational**       | `>`, `<`, `==`, `!=`         | Compare values.                  |
| **Logical**          | `&&`, `||`, `!`              | Combine boolean conditions.      |
| **Assignment**       | `=`, `+=`, `-=`, `*=`, `/=`  | Assign values to variables.      |
| **Bitwise**          | `&`, `|`, `~`, `<<`, `>>`   | Manipulate binary data.          |
| **Conditional**      | `?:`                         | Simplify `if-else` logic.        |
| **Special**          | `&` (address), `*` (pointer) | Memory management.               |

---

## Experiment 1
```c
/*
WAP to find simple interest and compound interest on a sum.
Also find difference between them.
Hint:
    SI = P * T * R / 100
    CI = P * pow((1 + R / 100), T)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int P, T, R;

    // Taking input from user
    printf("Enter Principle(in rupees), Time(in year) and Rate of interest(in percent): ");
    scanf("%d%d%d", &P, &T, &R);

    // Finding simple interest
    float SI = P * T * R / 100.0;

    // Finding compound interest
    float CI = P * pow((1 + R / 100.0), T);

    // Printing results
    printf("Simple interest: %.2f\n", SI);
    printf("Compound interest: %.2f\n", CI);
    printf("Difference in interest: %.2f\n", CI - SI);

    return 0;
}
```

**Output:**
```output
Enter Principle(in rupees), Time(in year) and Rate of interest(in percent): 10000 5 15
Simple interest: 7500.00
Compound interest: 20113.57
Difference in interest: 12613.57
```

---

## Experiment 2
```c
/*
WAP to find the sum of a 4-digit number without using loops.
*/

#include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    // Taking input from user
    printf("Enter a 4-digit number for the sum of digits: ");
    scanf("%d", &n);    // 1234

    // For unit place digit
    rem = n % 10;   // rem = 1234 % 10 = 4
    sum += rem;     // sum = 0 + 4 = 4
    n /= 10;        // n = 1234 / 10 = 123

    // For tenth place digit
    rem = n % 10;   // rem = 123 % 10 = 3
    sum += rem;     // sum = 4 + 3 = 7
    n /= 10;        // n = 123 / 10 = 12

    // For hundredth place digit
    rem = n % 10;   // rem = 12 % 10 = 2
    sum += rem;     // sum = 7 + 2 = 9
    n /= 10;        // n = 12 / 10 = 1

    // For thousandth place digit
    sum += n;   // sum = 9 + 1 = 10

    // Printing sum
    printf("Sum of digits = %d\n", sum);

    return 0;
}
```

**Output:**
```output
Enter a 4-digit number for the sum of digits: 1234
Sum of digits = 10
```

---

## Experiment 3
```c
/*
WAP to swap two variables a and b using third variable.
*/

#include <stdio.h>

int main()
{
    int a, b;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Printing input numbers
    printf("The numbers before swapping : %d and %d\n", a, b);

    // Swapping the variables
    int temp = a;
    a = b;
    b = a;

    // Printing result
    printf("The numbers after swapping : %d and %d\n", a, b);

    return 0;
}
```

**Output:**
```output
Enter two numbers: 2 3
The numbers before swapping : 2 and 3
The numbers after swapping : 3 and 3
```

---

# Experiment 4
```c
/*
WAP to swap two variables a and b without using third variable.
*/

#include <stdio.h>

int main()
{
    int a, b;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Printing input numbers
    printf("The numbers before swapping : %d and %d\n", a, b);

    // Swapping the variables
    a = a + b;
    b = a - b;
    a = a - b;

    // Printing result
    printf("The numbers after swapping : %d and %d\n", a, b);

    return 0;
}
```

**Output:**
```output
Enter two numbers: 2 3
The numbers before swapping : 2 and 3
The numbers after swapping : 3 and 2
```

---

## Discussion
Basic arithmetic operators were learnt.
- `#include <math.h>` is a preprocessor directive that includes the predefined maths functions in C.
- We have used one function from it which is `double pow(double __x, double __y)` while calculating compound interest.
- We also learnt to find the sum of digits in a number also with the processes of swapping two numbers.

---

## Conclusion
The participants gained confidence in the operations using simple operators.

---

## Future Directions
Strong concept from this lab will help in future projects and other labs.

---
