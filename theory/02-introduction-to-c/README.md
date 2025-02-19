# Introduction to C

## Introduction
C is a general-purpose programming language created by Dennis Ritchie at Bell Laboratories in 1972. It is a very popular language despite its age and is a fundamental language in the field of computer science.


### Key Features
- General Purpose and Portable: C can be used to develop software that can be run on different hardware platforms.
- Low-level Memory Access: C provides low-level access to memory, which is crucial for system programming.
- Fast Speed: Compared to other programming languages like Java and Python, C is very fast.
- Clean Syntax: The syntax of C is straightforward and easy to understand.

### Importance
C is strongly associated with UNIX, as it was developed to write the UNIX operating system. Many later languages have borrowed syntax/features directly or indirectly from C. For example, the syntax Java, PHP, JavaScript, and many other languages is mainly based on C.

C++ was developed as an extension of C and both languages have almost the same syntax. The main difference between C and C++ is that C++ supports classes and objects while C doesn’t.

---

## Writing First Program
**Program:**  
```c
/*
Author: Kushal Prasad Joshi
Purpose: Introduction to C Programming
*/

#include <stdio.h>  // Preprocessor directive --> Link Sectoin

int main()  // Start of main program --> main() section 
{
    printf("Hello World");  // Our code

    return 0;   // Returning value  -->  Each function returns value after its completion
}
```

**Output:**
```output
Hello World
```

### Flow of a C Program
**Preprocessing --> Compilation --> Assembly --> Linking --> Loading**

1.	**Preprocessing:** Comments are removed; macros are expanded; #include files are resolved; converts .c file to .i file.

2.	**Compilation:** Converts preprocessed file (.i file) to assembly file (.s file); Our program is converted to assembly language.

3.	**Assembly:** Converts assembly file (.s file) to machine code instructions (.o file)

4.	**Linking:** Connects all the machine code instructions (.o files) and makes an executable file (.exe file).

5.	**Loading:** The executable file runs in your system.

**NOTE:** 
The command to get all these files is:
```bash
	gcc -save-temps <|file_name.c|> -o <|executable_name.exe|>
```

---

## Components of C Program
The following are the components of a C program:  
- **Keywords**: Predefined words that have special meaning to the compiler.
- **Identifiers**: Names given to different entities such as variables, functions, etc.
- **Constants**: Values that remain fixed and cannot be changed.
- **String literals**: Sequence of characters enclosed in double quote.
- **Symbols**: abbreviations of operators.
- **Comments**: Portion of code that is not executed by compiler.

### Keywords
The C programming language has 32 reserved keywords:
| Keyword   | Keyword   | Keyword   | Keyword   |
|-----------|-----------|-----------|-----------|
| auto      | double    | int       | struct    |
| break     | else      | long      | switch    |
| case      | enum      | register  | typedef   |
| char      | extern    | return    | union     |
| const     | float     | short     | unsigned  |
| continue  | for       | signed    | void      |
| default   | goto      | sizeof    | volatile  |
| do        | if        | static    | while     |

These keywords are reserved C for specific tasks so they can't be used for other tasks.

### Identifiers
Identifiers are names given to various program elements such as variables, functions, arrays, etc. They are used to identify these elements uniquely within the program.

#### Rules for Defining Identifiers:**  
1. Identifiers can consist of letters (both uppercase and lowercase), digits, and underscores (_).
2. The first character of an identifier must be a letter or an underscore (_). It cannot be a digit.
3. Identifiers are case-sensitive, meaning `variable` and `Variable` would be considered different identifiers.
4. Keywords cannot be used as identifiers.
5. There is no limit to the length of an identifier, but only the first 31 characters are typically significant.

**Example:**
```c
int number;      // Valid identifier
float _value;    // Valid identifier
char name1;      // Valid identifier
double 2ndValue; // Invalid identifier (cannot start with a digit)
int return;      // Invalid identifier (cannot use keyword)
```

### Constants
Constants in C are fixed values that do not change during the execution of a program. They can be of any data type, such as integer, float, character, or string. Constants are defined using the `const` keyword or the `#define` preprocessor directive.

#### Types of Constants
1. **Integer Constants**: These are whole numbers without any fractional part. They can be written in decimal, octal, or hexadecimal format.
    - Decimal: `10`, `-20`
    - Octal: `012` (equivalent to 10 in decimal)
    - Hexadecimal: `0xA` (equivalent to 10 in decimal)

2. **Floating-point Constants**: These are numbers with a fractional part. They can be written in decimal or exponential notation.
    - Decimal: `3.14`, `-0.001`
    - Exponential: `1.5e3` (equivalent to 1500)

3. **Character Constants**: These are single characters enclosed in single quotes.
    - Example: `'a'`, `'1'`, `'\n'`

4. **String Constants**: These are sequences of characters enclosed in double quotes.
    - Example: `"Hello, World!"`, `"C Programming"`

#### Defining Constants
1. **Using `#define` Preprocessor Directive**: This method defines a constant value that is replaced by the preprocessor before compilation.
    ```c
    #define PI 3.14
    #define MAX_SIZE 100
    ```

2. **Using `const` Keyword**: This method defines a constant variable whose value cannot be changed after initialization.
    ```c
    const int maxAge = 100;
    const float pi = 3.14;
    ```

**Example:**
```c
#include <stdio.h>

#define PI 3.14  // Define constant using #define

int main() {
    const int maxAge = 100;  // Define constant using const keyword

    printf("Value of PI: %f\n", PI);
    printf("Maximum Age: %d\n", maxAge);

    return 0;
}
```

**Output:**
```output
Value of PI: 3.140000
Maximum Age: 100
```

### String Literals
String literals in C are sequences of characters enclosed in double quotes. They are used to represent text in a program. Each string literal ends with a special character `\0` that indicates the end of the string.

#### Characteristics of String Literals
1. **Enclosed in Double Quotes**: String literals must be enclosed in double quotes. For example, `"Hello, World!"`.
2. **Null-Terminated**: The C compiler automatically adds a null character `\0` at the end of the string to mark its termination.
3. **Immutable**: String literals are read-only, meaning their content cannot be modified after they are defined.

#### Format Specifiers
Format specifiers in C are used in input and output functions to specify the type of data being read or written. They are used with functions like `printf()` and `scanf()` to format the data correctly.

Some common format specifiers are:  
| Specifier | Data Type       | Description                          | Example       |
|-----------|-----------------|--------------------------------------|---------------|
| `%d`      | int             | Signed decimal integer               | `printf("%d", 10);` |
| `%u`      | unsigned int    | Unsigned decimal integer             | `printf("%u", 10);` |
| `%f`      | float           | Decimal floating-point               | `printf("%f", 3.14);` |
| `%lf`     | double          | Double floating-point                | `printf("%lf", 3.14159);` |
| `%c`      | char            | Single character                     | `printf("%c", 'A');` |
| `%s`      | char*           | String of characters                 | `printf("%s", "Hello");` |
| `%x`      | unsigned int    | Unsigned hexadecimal integer (lowercase) | `printf("%x", 255);` |
| `%X`      | unsigned int    | Unsigned hexadecimal integer (uppercase) | `printf("%X", 255);` |
| `%o`      | unsigned int    | Unsigned octal integer               | `printf("%o", 255);` |
| `%p`      | void*           | Pointer address                      | `printf("%p", ptr);` |
| `%e`      | float, double   | Scientific notation (lowercase)      | `printf("%e", 3.14);` |
| `%E`      | float, double   | Scientific notation (uppercase)      | `printf("%E", 3.14);` |
| `%%`      | None            | Prints a percent sign                | `printf("%%");` |

Format specifiers are essential for correctly displaying and reading various data types in C programs.


#### Escape Sequence Characters
Escape sequence characters in C are used to represent special characters within string literals and character constants. They are preceded by a backslash (`\`) and have a specific meaning.

Some common escape sequence characters are:  
| Escape Sequence | Character Description | Example       |
|-----------------|-----------------------|---------------|
| `\n`            | Newline               | `printf("Hello\nWorld");` |
| `\t`            | Horizontal Tab        | `printf("Hello\tWorld");` |
| `\\`            | Backslash             | `printf("C:\\Program Files");` |
| `\"`            | Double Quote          | `printf("\"Hello, World!\"");` |
| `\'`            | Single Quote          | `printf("It\'s a test.");` |
| `\r`            | Carriage Return       | `printf("Hello\rWorld");` |
| `\b`            | Backspace             | `printf("Hello\bWorld");` |
| `\f`            | Form Feed             | `printf("Hello\fWorld");` |
| `\a`            | Alert (Bell)          | `printf("Hello\aWorld");` |
| `\v`            | Vertical Tab          | `printf("Hello\vWorld");` |
| `\?`            | Question Mark         | `printf("Hello\?World");` |

Escape sequence characters are essential for formatting output and representing special characters in C programs.

#### Concatenation of String Literals
String literals can be combined at compile time by placing them next to each other.

**Example:**
```c
#include <stdio.h>

int main() {
    printf("Hello, " "World!\n");  // Output: Hello, World!

    return 0;
}
```

**Output:**
```output
Hello, World!
```

In this example, the two string literals `"Hello, "` and `"World!"` are combined into a single string `"Hello, World!"`.

String literals are essential for handling text in C programs, and understanding their properties helps in effective string manipulation.

---

## Symbols
Symbols in C programming are special characters that have specific meanings and are used to perform various operations. They include punctuators and special characters that help define the structure and flow of the code.

### Common Symbols
- **Semicolon (`;`)**: Used to terminate statements.
- **Curly braces (`{}`)**: Used to define the beginning and end of a block of code.
- **Parentheses (`()`)**: Used to group expressions and to define function parameters.
- **Square brackets (`[]`)**: Used to define array subscripts.
- **Comma (`,`)**: Used to separate multiple expressions or parameters.
- **Dot (`.`)**: Used to access members of a structure.
- **Arrow operator (`->`)**: Used to access members of a structure through a pointer.

These symbols are essential for writing syntactically correct C programs and help in organizing and controlling the flow of the code. We also have other operators symbols which we will discuss later.

### Comments
Comments are used to provide explanations or notes in the source code. They make the code easier to read and understand. The C compiler completely ignores the comments.

There are two types of writing comments in C. They are: single line comments and multi-line comments.

#### 1. Single Line Comment
- In C programming language a single line comment starts with `//`. 
- It extends till the end of the line, and we don’t need to specify its end.

**Example:**
```c
// This is a single line comment.
```

#### 2. Multi-line Comments
- In C programming, there is another type of comment that allows us to comment on multiple lines at once, they are multiline comments. 
- To write multiline comments we use the `/*……*/` symbol

**Example:**
```c
/* This is a multi-line comment.
This comment can be written in multiple lines. */
```

---

## Sections of a C Program

A C program typically consists of the following sections:

1. **Documentation Section**: This section contains comments that describe the purpose of the program, the author, and other relevant information. Comments are enclosed within `/* */` or preceded by `//`.

2. **Link Section**: This section includes the header files that provide the necessary functions and macros. For example, `#include <stdio.h>` includes the standard input-output library.

3. **Definition Section**: This section defines constants using `#define` or `const` keyword. For example, `#define PI 3.14`.

4. **Global Declaration Section**: This section declares global variables and function prototypes that can be accessed throughout the program.

5. **Main Function Section**: This section contains the `main()` function, which is the entry point of the program. The execution of the program starts from the `main()` function.

6. **Subprogram Section**: This section contains user-defined functions that are called within the `main()` function or other functions. These functions help in modularizing the code and improving readability.

### Structure of a C program:
```c
/* Documentation Section */
#include <stdio.h>  // Link Section

#define PI 3.14     // Definition Section

int globalVar;      // Global Declaration Section

// Function prototype
void display();

int main() {        // Main Function Section
    printf("Hello, World!\n");
    display();
    return 0;
}

// Subprogram Section
void display() {
    printf("This is a user-defined function.\n");
}
```

---

## Data Types

Data types in C specify the type of data that a variable can hold. They determine the size and layout of the variable's memory, the range of values that can be stored, and the set of operations that can be performed on the variable.

### Basic Data Types
1. **int**: Used to store integers.
    - Example: `int a = 10;`
2. **float**: Used to store floating-point numbers (single precision).
    - Example: `float b = 3.14;`
3. **double**: Used to store floating-point numbers (double precision).
    - Example: `double c = 3.14159;`
4. **char**: Used to store single characters.
    - Example: `char d = 'A';`

### Derived Data Types
1. **Arrays**: Collection of elements of the same type.
    - Example: `int arr[5];`
2. **Pointers**: Variables that store the address of another variable.
    - Example: `int *ptr;`
3. **Structures**: Collection of variables of different types.
    - Example: 
    ```c
    struct Person {
        char name[50];
        int age;
    };
    ```
4. **Unions**: Similar to structures but share the same memory location.
    - Example: 
    ```c
    union Data {
        int i;
        float f;
        char str[20];
    };
    ```

### Enumeration Data Type
- **enum**: Used to define a set of named integer constants.
    - Example: 
    ```c
    enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    ```

### Void Data Type
- **void**: Represents the absence of type. Commonly used for functions that do not return a value.
    - Example: `void functionName();`

Understanding data types is fundamental to programming in C, as they define the nature of the data and the operations that can be performed on it.

### Overflow and Underflow of Data

In C programming, overflow and underflow are conditions that occur when the result of an arithmetic operation exceeds the range of the data type used to store the result.

#### Overflow
Overflow occurs when a calculation produces a result that is larger than the maximum value that can be stored in a given data type.

**Example:**
```c
unsigned char a = 255; // Maximum value for unsigned char
a = a + 1; // Overflow occurs here
```

In this example, adding 1 to the maximum value of an `unsigned char` (255) causes an overflow, resulting in the value wrapping around to 0.

#### Underflow
Underflow occurs when a calculation produces a result that is smaller than the minimum value that can be stored in a given data type.

**Example:**
```c
unsigned char a = 0; // Minimum value for unsigned char
a = a - 1; // Underflow occurs here
```

In this example, subtracting 1 from the minimum value of an `unsigned char` (0) causes an underflow, resulting in the value wrapping around to 255.

Understanding overflow and underflow is important for writing robust programs, as these conditions can lead to unexpected behavior and bugs.

---

## Operators
Operators in C are special symbols that perform specific operations on one, two, or three operands and then return a result. Operators are used in expressions to manipulate data and variables.

### Types of Operators Based on Operands

1. **Unary Operators**: Operate on a single operand.
    - Example: `++a`, `--a`, `!a`, `sizeof(a)`

2. **Binary Operators**: Operate on two operands.
    - Example: `a + b`, `a - b`, `a * b`, `a / b`

3. **Ternary Operator**: Operates on three operands.
    - Example: `a ? b : c`

### Types of Operators Based on Tasks
#### Arithmetic Operators
Perform arithmetic operations.
| Operator | Description  | Example       |
|----------|--------------|---------------|
| `+`      | Addition     | `a + b`       |
| `-`      | Subtraction  | `a - b`       |
| `*`      | Multiplication| `a * b`      |
| `/`      | Division     | `a / b`       |
| `%`      | Modulus      | `a % b`       |
| `++`     | Increment    | `a++` or `++a`|
| `--`     | Decrement    | `a--` or `--a`|

**Example:**
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 5; // Initialize a with 5
    b = 3; // Initialize b with 3

    // Addition of a and b
    printf("a + b = %d\n", a + b);

    // Subtraction of b from a
    printf("a - b = %d\n", a - b);

    // Multiplication of a and b
    printf("a * b = %d\n", a * b);

    // Integer division of a by b
    printf("a / b = %d\n", a / b);

    // Remainder of a divided by b
    printf("a %% b = %d\n", a % b);

    return 0; // Return 0 to indicate successful execution
}
```

**Output:**
```output
a + b = 8
a - b = 2
a * b = 15
a / b = 1
a % b = 2
```

#### Relational Operators
Compare two values and return a boolean result.
| Operator | Description          | Example       |
|----------|----------------------|---------------|
| `==`     | Equal to             | `a == b`      |
| `!=`     | Not equal to         | `a != b`      |
| `>`      | Greater than         | `a > b`       |
| `<`      | Less than            | `a < b`       |
| `>=`     | Greater than or equal| `a >= b`      |
| `<=`     | Less than or equal   | `a <= b`      |

**Example:**
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 5; // Assign value 5 to variable a
    b = 3; // Assign value 3 to variable b

    // Print the result of the equality comparison (a == b)
    printf("a == b = %d\n", a == b);
    // Print the result of the inequality comparison (a != b)
    printf("a != b = %d\n", a != b);
    // Print the result of the less than comparison (a < b)
    printf("a < b = %d\n", a < b);
    // Print the result of the greater than comparison (a > b)
    printf("a > b = %d\n", a > b);
    // Print the result of the greater than or equal to comparison (a >= b)
    printf("a >= b = %d\n", a >= b);
    // Print the result of the less than or equal to comparison (a <= b)
    printf("a <= b = %d\n", a <= b);

    return 0; // Return 0 to indicate successful execution
}
```

**Output:**
```output
a == b = 0
a != b = 1
a < b = 0
a > b = 1
a >= b = 1
a <= b = 0
```

#### Logical Operators
Perform logical operations and return a boolean result.
| Operator | Description  | Example       |
|----------|--------------|---------------|
| `&&`     | Logical AND  | `a && b`      |
| `\|\|`   | Logical OR   | `a \|\| b`    |
| `!`      | Logical NOT  | `!a`          |

**Example:**
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 1; // Assign 1 to a (true)
    b = 0; // Assign 0 to b (false)

    // Logical AND operation
    printf("a && b = %d\n", a && b); // 1 && 0 = 0 (false)

    // Logical OR operation
    printf("a || b = %d\n", a || b); // 1 || 0 = 1 (true)

    // Logical NOT operation
    printf("!a = %d\n", !a); // !1 = 0 (false)
    printf("!b = %d\n", !b); // !0 = 1 (true)

    return 0;
}
```

**Output:**
```output
a && b = 0
a || b = 1
!a = 0
!b = 1
```

#### Bitwise Operators
Perform bit-level operations.
| Operator | Description  | Example       |
|----------|--------------|---------------|
| `&`      | Bitwise AND  | `a & b`       |
| `\|`     | Bitwise OR   | `a \| b`      |
| `^`      | Bitwise XOR  | `a ^ b`       |
| `~`      | Bitwise NOT  | `~a`          |
| `<<`     | Left shift   | `a << 1`      |
| `>>`     | Right shift  | `a >> 1`      |

**Example:**
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 2; // Assign value 2 to a
    b = 3; // Assign value 3 to b

    // Bitwise AND operation
    printf("a & b = %d\n", a & b);
    // Bitwise OR operation
    printf("a | b = %d\n", a | b);
    // Bitwise XOR operation
    printf("a ^ b = %d\n", a ^ b);
    // Bitwise NOT operation
    printf("~a = %d\n", ~a);
    // Right shift operation
    printf("a >> 1 = %d\n", a >> 1);
    // Left shift operation
    printf("a << 1 = %d\n", a << 1);

    return 0;
}
```

**Output:**
```output
a & b = 2
a | b = 3
a ^ b = 1
~a = -3
a >> 1 = 1
a << 1 = 4
```

#### Assignment Operators
Assign values to variables.
| Operator | Description          | Example       |
|----------|----------------------|---------------|
| `=`      | Assignment           | `a = b`       |
| `+=`     | Add and assign       | `a += b`      |
| `-=`     | Subtract and assign  | `a -= b`      |
| `*=`     | Multiply and assign  | `a *= b`      |
| `/=`     | Divide and assign    | `a /= b`      |
| `%=`     | Modulus and assign   | `a %= b`      |

**Example:**
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    // Assign 2 to a and print the result
    printf("a = 2 = %d\n", a = 2);
    // Add 2 to a and print the result
    printf("a += 2 = %d\n", a += 2);
    // Subtract 2 from a and print the result
    printf("a -= 2 = %d\n", a -= 2);
    // Multiply a by 2 and print the result
    printf("a *= 2 = %d\n", a *= 2);
    // Divide a by 2 and print the result
    printf("a /= 2 = %d\n", a /= 2);
    // Get the remainder of a divided by 2 and print the result
    printf("a %%= 2 = %d\n", a %= 2);
    // Right shift a by 2 bits and print the result
    printf("a >>= 2 = %d\n", a >>= 2);
    // Left shift a by 2 bits and print the result
    printf("a <<= 2 = %d\n", a <<= 2);
    // Perform bitwise AND on a with 2 and print the result
    printf("a &= 2 = %d\n", a &= 2);
    // Perform bitwise OR on a with 2 and print the result
    printf("a |= 2 = %d\n", a |= 2);

    return 0;
}
```

**Output:**
```output
a = 2 = 2
a += 2 = 4
a -= 2 = 2
a *= 2 = 4
a /= 2 = 2
a %= 2 = 0
a >>= 2 = 0
a <<= 2 = 0
a &= 2 = 0
a |= 2 = 2
```

### Miscellaneous Operators

| Operator | Description          | Example       |
|----------|----------------------|---------------|
| `? :`    | Conditional          | `a ? b : c`   |
| `,`      | Comma                | `a = (b, c)`  |
| `sizeof` | Sizeof               | `sizeof(a)`   |
| `*`      | Dereference          | `*ptr`        |
| `&`      | Address of           | `&a`          |

**Example:**
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2; // Declare an integer variable 'a' and initialize it with the value 2

    // Print the size of the variable 'a' in bytes
    printf("Size of a = %lu\n", sizeof(a));
    
    // Print the memory address of the variable 'a'
    printf("&a = %p\n", &a);
    
    // Print the value stored at the memory address of 'a'
    printf("*(&a) = %d\n", *(&a));

    return 0; // Return 0 to indicate successful execution
}
```

**Output:**
```output
Size of a = 4
&a = 0061FF1C
*(&a) = 2
```

### Precedence and Associativity of Operators

Operator precedence determines the order in which operators are evaluated in expressions. Operators with higher precedence are evaluated before operators with lower precedence. Associativity determines the order in which operators of the same precedence are evaluated.

| Precedence Level | Operator Type          | Operators                                | Associativity  |
|------------------|------------------------|------------------------------------------|----------------|
| 1                | Postfix                | `()`, `[]`, `->`, `.`                    | Left to Right  |
| 2                | Unary                  | `+`, `-`, `!`, `~`, `++`, `--`, `*`, `&` | Right to Left  |
| 3                | Multiplicative         | `*`, `/`, `%`                            | Left to Right  |
| 4                | Additive               | `+`, `-`                                 | Left to Right  |
| 5                | Shift                  | `<<`, `>>`                               | Left to Right  |
| 6                | Relational             | `<`, `<=`, `>`, `>=`                     | Left to Right  |
| 7                | Equality               | `==`, `!=`                               | Left to Right  |
| 8                | Bitwise AND            | `&`                                      | Left to Right  |
| 9                | Bitwise XOR            | `^`                                      | Left to Right  |
| 10               | Bitwise OR             | `\|`                                      | Left to Right  |
| 11               | Logical AND            | `&&`                                     | Left to Right  |
| 12               | Logical OR             | `\|\|`                                     | Left to Right  |
| 13               | Conditional            | `? :`                                    | Right to Left  |
| 14               | Assignment             | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `\|=` | Right to Left  |
| 15               | Comma                  | `,`                                      | Left to Right  |

---

## Exercises

**1. WAP to add two numbers.**

Program:  
```c
/*
WAP to add two numbers.
*/

#include <stdio.h>  // Preprocessor directive

void main() {
    int a, b, c;    // Declaring variables

    // Taking input from user
    printf("Enter two numbers: ");  // Display notice
    scanf("%d%d", &a, &b);  // Take the values

    c = a + b;  // Calculate the sum

    printf("Sum = %d", c);  // Display the sum
}
```

Output:  
```output
Enter two numbers: 3 5
Sum = 8
```

**2. WAP to find area and perimeter of circle.**

Program:  
```c
/*
WAP to calculate area and perimeter of a circle and print the result.
Take radius as user input.
*/

#include <stdio.h>  // Preprocessor directive

void main() {
    // Declare required variables
    int r;
    float pi = 3.14f;

    // Take required input from user
    printf("Enter radius of circle: ");
    scanf("%d", &r);

    //  Calculate and print area and perimeter
    printf("The area of circle is %f\n", pi * r * r);
    printf("The perimeter of circle is %f\n", 2 * pi * r);
}
```

Output:  
```output
Enter radius of circle: 5
The area of circle is 78.500003
The perimeter of circle is 31.400001
```

**3. WAP to find area of traingles form its sides.**

Program:
```c
/*
WAP to input sides of traingle and find its area.
*/

// Preprocessor directives
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declare required variables
    float a, b, c;    
    float s, area;

    // Take input from user
    printf("Enter the sides of a traingle: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2.0;  // Calculate semi-perimeter
    area = sqrt(s * (s-a) * (s-b) *(s-c));  // Calculate area

    printf("The area of traingle is %f", area); // Print area

    return 0;
}
```

Output:  
```output
Enter the sides of a traingle: 3 4 5
The area of traingle is 6.000000
```

**4. WAP to swap two numbers using third temporary variable.**

Program:
```c
/*
WAP to swap two numbers using third temporary variable.
*/

#include <stdio.h>  // Preprocessor directive

int main(int argc, char const *argv[])
{
    int a, b, temp;   // Declare required variables

    // Take input from user
    printf("Enter two numbers: ");  // Display notice
    scanf("%d%d", &a, &b);  // Scan and store inputs in variables

    printf("The numbers before swapping : %d and %d\n", a, b);  // Print before swapping

    // Method of swapping using third temporary variable
    temp = a;
    a = b;
    b = a;

    printf("The numbers after swapping : %d and %d\n", a, b);  // Print after swapping

    return 0;
}
```

Output:
```output
Enter two numbers: 3 5
The numbers before swapping : 3 and 5
The numbers after swapping : 5 and 5
```

**5. WAP to swap two numbers without using third temporary variable.**

Program:
```c
/*
WAP to swap two numbers without using third temporary variable.
*/

#include <stdio.h>  // Preprocessor directive

int main(int argc, char const *argv[])
{
    int a, b;   // Declare required variables

    // Take input from user
    printf("Enter two numbers: ");  // Display notice
    scanf("%d%d", &a, &b);  // Scan and store inputs in variables

    printf("The numbers before swapping : %d and %d\n", a, b);  // Print before swapping

    // Method of swapping using third temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The numbers after swapping : %d and %d\n", a, b);  // Print after swapping

    return 0;
}
```

Output:
```output
Enter two numbers: 4 5
The numbers before swapping : 4 and 5
The numbers after swapping : 5 and 4
```

**6. WAP to input a 4 digit number and find the sum of digits without using loops.**

Program:
```c
/*
WAP to input a 4 digit number and find the sum of digits without using loops
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, r, sum = 0;

    // Take input from user
    printf("Enter a four digit number: ");
    scanf("%d", &n);

    // 1st Step
    r = n % 10;
    sum = sum + r;
    n = n / 10;

    // 2nd Step
    r = n % 10;
    sum = sum + r;
    n = n / 10;

    // 3rd Step
    r = n % 10;
    sum = sum + r;
    n = n / 10;

    // 4th Step
    r = n;
    sum = sum + r;

    // Printing sum
    printf("The sum of digits is %d", sum);

    return 0;
}
```

Output:
```output
Enter a four digit number: 1234
The sum of digits is 10
```

---
