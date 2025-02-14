# Lab 03: Escape Sequence Characters and Number Systems

## Objective
To introduce participants to the basic of escape sequence characters used in C programming and introduce hexadecimal and octal number systems.

---

## Agenda
1. [WAP to enter number of days and convert it to year, month and days.](./01-days-to-year-month-and-day.c)
2. [Printing using format specifiers and '\t'.](./02-formatted-output.c)
3. [WAP to add two hexadecimal and octal numbers.](./03-hex-and-oct-operations.c)

---

## Requirements
1. **Code Edioter**
2. **C Compiler**
3. **Computer** with the required softwares installed.

---

## Theory
### Escape Sequence Characters
An escape sequence contains a backslash `\` symbol followed by a character and are defined for any specifice tasks.

Some of them are as follows:  
| Character | Name              |  Purpose                                           |
|-----------|-------------------|----------------------------------------------------|
| `\"`      | **double quote**  | Insert a double quote character.                   |
| `\'`      | **single quote**  | Insert a single quote character.                   |
| `\?`      | **question mark** | Insert a quesion mark.                             |
| `\0`      | **null character** | Insert a null character.                          |
| `\n`      | **new line character** | Insert a new line.                            |
| `\t`      | **insert tab**    | Insert a tab.                                      |
| `\a`      | **alert or bell** | Produces an audible alert or bell.                 |
| `\b`      | **backspace**     | Moves the cursor back by one position.             |
| `\f`      | **form feed**     | Advances the printerto the next logical page.      |
| `\r`      | **carriage return** | Moves the cursor to the begining of the line.    |
| `\v`      | **vertical tab**  | Moves the cursor to the next vertical tab stop.    |
| `\\`      | **backslash**     | Insert a backslash character.                      |

### Hexadecimal Number System
The number system with the radix 16 and {0, 1, 2, 3, 4, 5, 6, 7. 8. 9. A. B, C, D, E, F} as symbols is hexadecimal number system.  
Its format specifier is `%x` or `%X` in C.

### Octal Number System
The number system with the radix 8 and {0, 1, 2, 3, 4, 5, 6, 7. 8} as symbols is octal number system.  
Its format specifier is `%o` or `%O` in C.

---

## Experiment 1
```c
/*
WAP to enter number of days and convert it to year, month and day.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;

    // Taking input from user
    printf("Enter the number of days: ");
    scanf("%d", &input);

    // Getting year
    int year = input / 365;
    int remainingDays = input % 365;

    // Getting month
    int month = remainingDays / 30;

    // Getting day
    int day = remainingDays % 30;

    // Printing result
    printf("%d days = %d years | %d months | %d days", input, year, month, day);
    
    return 0;
}
```

**Output:**
```output
Enter the number of days: 456
456 days = 1 years | 3 months | 1 days
```

---

## Experiment 2
```c
/*
Let x = 5, y = 10, z = 20, a = 200, b= 2000, c = 3000
Print result as:
x       y       z       =       |5      |10     |20
a       b       c       =       |200    |2000   |3000

x       y       z       =       5|      10|     20|
a       b       c       =     200|    2000|   3000|
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5, y = 10, z = 20;
    int a = 200, b = 2000, c = 3000;

    // Printing the given format
    printf("x\ty\tz\t=\t|%-9d|%-9d|%-9d\n", x, y, z);
    printf("a\tb\tc\t=\t|%-9d|%-9d|%-9d\n", a, b, c);
    printf("\n");
    printf("x\ty\tz\t=%9d|%9d|%9d|\n", x, y, z);
    printf("a\tb\tc\t=%9d|%9d|%9d|\n", a, b, c);

    return 0;
}
```

**Output:**
```output
x       y       z       =       |5        |10       |20       
a       b       c       =       |200      |2000     |3000     

x       y       z       =        5|       10|       20|
a       b       c       =      200|     2000|     3000|
```

---

## Experiment 3
```c
/*
WAP to add to hex and oct numbers.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hex1, hex2;
    int oct1, oct2;

    // For two hex number addition
    printf("Enter two hex numbers: ");
    scanf("%x%x", &hex1, &hex2);
    printf("Sum = %x\n", hex1 + hex2);

    // For two oct number addition
    printf("Enter two oct numbers: ");
    scanf("%o%o", &oct1, &oct2);
    printf("Sum = %o\n", oct1 + oct2);

    return 0;
}
```

**Output:**
```output
Enter two hex numbers: ee fff
Sum = 10ed
Enter two oct numbers: 56 67
Sum = 145
```

---

## Discussion
Common escape sequence characters were learnt. Hexadecimal and octal arithmetic operations were introduced.  
- We calculated number of years, months and days from number of days inputed.
- We printed a context using format specifiers and '\t' character in formatted output.
- We did some arithmetic operations on hex and oct numbers.

---

## Conclusion
The participants gained confidence in the operations using hexadecimal and octal numbers. They learnt abotu escape sequence characters and formatted output.

---
