# Lab 01: Introduction to Basic Programs

## Objectives:
To introduce participants to the basic of C programming, enabling them to understand and write simple programs using fundamental programming constructs.

---

## Agenda
1. [WAP to print "Hello World".](./01-hello-world.c)
2. [WAP to ask two numbers from users and print them.](./02-user-input.c)
3. [WAP to ask two numbers from users and calculate the sum, dif, mul, div, rem.](./03-arithmetic-operations.c)
4. [WAP to find size fo data types](./04-size-of-data-types.c)

---

## Materials and Softwares
1. **Code Edioter** (e.g. Visual Studio Code, Dev-C++ or any C-compactible IDE)
2. **C Compiler** (e.g. GCC, Microsoft Visual C++)
3. **Computer** with required softwares installed.

---

## Theory
### 1. C Programming
C programming language is a versatile and widely used programming language known for its efficiency and low level control over system resources, making it suitable for system programming, embedded systems and development of operating systems.

### 2. Functions
A block of statements which performs certain tasks is called function. They may be predefined or userdefined.

### 3. Variables
Variables are initialized memory locations. In these locations data can be stored and manipulated.

### 4. Data Types
Data type is a special case given to a variable to store a type of data.  
**Example:** int, char, float, etc.

---

## Procedure
1. Install a code editor of your choice.
2. Insatll a compiler of your choice.
3. Setup the environment.
4. Open your code edioter.
5. Create a new file with `.c` extension.
6. Let's get started.

---

## Experimet 1
```c
/*
WAP to print "Hello World!"
*/

#include <stdio.h>  // Header file

int main()  // Your program starts from here

{   // Starting curly brace means starting of your function's body

    printf("Hello World!"); // printf() is used to display something to user

    return 0;   // After program completes, it returns a value to OS
    
}   // Closing curly brace means ending of the function's body
```

**Output:**
```output
Hello World!
```

---

## Experiment 2
```c
/*
WAP to ask two numbers from user and print them
*/

#include <stdio.h>  // Preprocessor directive

int main()  // Starting main function here

{   // Start of a program

    int num1, num2; // Declaration of variables

    printf("Enter two numbers: ");  // Displaying message

    scanf("%d%d", &num1, &num2);    // Taking user's input

    printf("The numbers entered are : %d and %d", num1, num2);  // Displaying the numbers entered by user

    return 0;   // Returning value to OS

}   // End of program
```

**Output:**
```output
Enter two numbers: 2 3
The numbers entered are : 2 and 3
```

---

## Experiment 3
```c
/*
WAP to input two numbers from user and calculate sum, difference, multiplication, division and remainder
*/

#include <stdio.h> // Preprocessor directive

int main()  // Program's main function starts from here

{   // Start

    int num1, num2; // Taking two integer variables

    printf("Enter two numbers: ");  // Displaying the notice

    scanf("%d%d", &num1, &num2); // Taking input from user and storing them in variables

    printf("Sum = %d\n", num1 + num2);  // Displaying Sum

    printf("Difference = %d\n", num1 - num2);  // Displaying Difference

    printf("Multiplication = %d\n", num1 * num2);  // Displaying Multiplication

    printf("Divison = %d\n", num1 / num2);  // Displaying Divison

    printf("Remainder = %d\n", num1 % num2);  // Displaying Remainder

    return 0; // Returning value
}
```

**Output:**
```output
Enter two numbers: 5 2
Sum = 7
Difference = 3
Multiplication = 10
Divison = 2
Remainder = 1
```

---

## Experiment 4
```c
/*
WAP to find size of datatypes.
*/

#include <stdio.h>  // Including standard input and output functions

int main()
{
    // sizeof is a function that returns size of datatype
    printf("Size of (int) = %d\n", sizeof(int));
    printf("Size of (char) = %d\n", sizeof(char));
    printf("Size of (short) = %d\n", sizeof(short));
    printf("Size of (double) = %d\n", sizeof(double));
    printf("Size of (float) = %d\n", sizeof(float));
    printf("Size of (long) = %d\n", sizeof(long));
    printf("Size of (long long) = %d\n", sizeof(long long));

    return 0;
}
```

**Output:**
```output
Size of (int) = 4
Size of (char) = 1
Size of (short) = 2
Size of (double) = 8
Size of (float) = 4
Size of (long) = 4
Size of (long long) = 8
```

---

## Discussion
Basic syntax of C-program were learnt. 
- `#include <stdio.h>` is a preprocessor directive that includes the standard input/output library. 
- The `main()` is the entry point of the program. 
- `printf()` function is used to print in console. 
- `int num1` is a variable declaration of an integer type. 
- `scanf()` function is used to take user input from console. 
- `+, -, *, /, %` are arithmetic operators in C programs. 
- `sizeof()` gives the size of datatype as a return value.

---

## Conclusion
The participants gained confidence in C-programming as the basics were learned.

---

## Future Directions
C-programming language is very popular among developers. Learning C gives all teh concepts of programming from memory mangagement to top level. So, choosing C as a first language is a good choice to build up yourself in programming.

---
