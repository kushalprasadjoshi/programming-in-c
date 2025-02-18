# Functions

## Introduction
Functions in C programming are fundamental building blocks that provide modularity, code reusability and efficient program design.

### What is a function?
- A function in C is a set of statements that perform a specific task.
- It encapsulates a sequence of actions into a single unit.
- It follows DRY (Don’t Repeat Yourself).

### Advantages of Using Functions
1.	**Modularity:** Functions allow you to break down a large program into smaller, manageable parts.
2.	**Reusability:** Once defined, functions can be used across different parts of your program.
3.	**Readability:** Well-named function enhances code readability.
4.	**Maintenance:** Changes to a function affect only that function, simplifying maintenance.

---

## Types of Functions
The traditional types of functions are:
### 1. Standard Library Functions
- These functions are built in and provided by the C-standard library.
- They serve common purposes and are available for use without any additional effort.
- These functions are defined in header files like `<stdio.h>` and `<math.h>`.
- Examples of standard library functions are: `printf()`, `scanf()`, `sqrt()`, `strlen()`, etc.

### 2.	User-Defined Functions
- User-defined functions are created by the programmer to perform some specific tasks.
- They enhance code modularity, readability, and reusability.

User-defined functions can be further classified based on their arguments and return values.

#### a.	Functions without Arguments and without Return Value (Void Function)
- These functions don’t take any argument and don’t return any value.
- They perform actions or tasks without producing a result.

**Example:**
```c
void greetUser() {
	printf(“Hello, user!\n”);
}
```

#### b.	Functions with Arguments and without a Return Value
- These functions accept arguments but don’t return a value.
- They perform action based on the provided arguments.

**Example:**
```c
void printSum(int a, int b) {
	printf(“Sum: %d\n”, a + b);
}
```

#### c.	Functions without Arguments and with Return Value
- These functions don’t take any arguments but return a value.
- They compute and provide a result.

**Example:**
```c
int getNumberSeven() {
	return 7;
}
```

#### d.	Functions with Arguments and with Return Value
- These functions both accept arguments and return a value.
- They compute on arguments and provide the result.

**Example:**
```c
int multiply(int x, int y) {
	return x * y;
}
```

---

## Working with Functions
To use a function, you must declare it, define its behavior and then call it from other parts of your program.

```c
// Genearally functions are defined at top, called inside main and defiend at end

#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int m = 2, n = 3;

    // Function call
    int result = add(m, n);

    return 0;
}

// Function defination
int add(int a, int b) {
    return a + b;
}
```

### 1. Function Declaration
- A function declaration specifies the function's name, its return type, and the number and type of its parameters.
- It informs the compiler that a function with name given exists elsewhere in the program.

**Syntax:**
```c
return_type function_name(parameter1_type parameter1_name, parameter2_type parameter2_name, ...);
```

**Example:**
```c
int add(int a, int b);
```

**Some terms used in function declaration are as follows:**

#### a. Return Type
- The return type specifies the type of value returned after executing the function.
- If no value need to be return, the `void` data type is used.

#### b. Function Name
- Function name is an identity given to a function so that you can call it later.
- Function name is case sensitive.
- It follows all the rules of declaring a variable.

#### c. Parameters
- Parameters act as variable inside function.
- They allow you to pass data from calling function to called function.
- Parameters are specified after the function name inside parentheses, as many as you need, seperated by commas.

### 2. Function Defination
- THe function defination contains the actual statements that execute when a function is called.
- A C function is typically defined and declared in single step.
- The function defination starts with the function declaration block.

**Syntax:**
```c
return_type function_name(parameter1_type parameter1_name, parameter2_type parameter2_name, ...)
{
    // Code to be executed (Function body)

    return return_value;
}
```

**Example:**
```c
int add(int a, int b) {
    int c = a + b;
    return c;
}
```

**Some new terms introduced are:**

#### a. Function Body
- It is a block of statements which get executed after a function is called.
- Function body can contain other predefined as well as user defined functions.

#### b. Return Value
- Return value is a value returned after the execution is finished, by called function to calling function.
- It is written with `return` keyword which shows the termination of function.
- It can be of any data type.

### 3. Function Call
- A function call instructs the compiler to execute the function.
- To call any function use the function name and provide the required arguments.

**Syntax:**
```c
return_type calling_function_name(parameter1_type parameter1_name, parameter2_type parameter2_name, ...)
{
    // Code

    called_function_name(argument1, argument2, argument3, ...);

    //Code
}
```

**Example:**
```c
int main() {
    int m = 2, n = 3;

    // Function call
    int result = add(m, n);

    return 0;
}
```

**Some new terms introduced are:**

#### a. Calling Function
- A calling function is function from which a call to another function is made.
- When a program invokes (calls) a function, the progrma control is transferred to a called function.
- The calling function initiates the execution of the called function.

#### b. Called Function
- A called function is a function that is invoked (called) form another function.
- It performs a specific task or set of instructions (staements).
- When the called function completes its execution (reaches its return statement ot closing brace), control returns to the calling function.

#### c. Arguments
- When you call a function, the value you provide are called arguments.
- Arguments are passed to the function's parameters.

**There are mainly two ways of passing arguments:**

##### i. Call by Value
- In call by value function parameters receive copies of actual values.
- Changes made to the parameters don't affect the original values.

**Example:**
```c
int sum(int x, int y) {
    return x + y;
}
```

##### ii. Call by Refrence
- In call by reference, function parameters receive the memory address of actual variables.
- Change made to the parameters directly affect the original values.

**Example:**
```c
int sum(int *x, int *y) {
    return *x + *y;
}
```

##### Passing Arrays to Function
- Arrays in C are always passed as pointer to the first element.

- You can pass individual elements of an array to function.
```c
display(array[1], array[2]);
```

- To pass an entire array, use the array name as an argument.
```c
num[] = {1, 2, 3, 4, 5};
result = calculate_sum(num);
```

- For multi-dimensional array pass the entire array by specifying its name.
```c
int array[][2] = {{1, 2}, {3, 4}};
display_array(array);
```

- To pass any array to function the parameters of the called function must be an array.
```c
int sum(int x[], int y[][3]);
```

---

## Recursion
- A recursion function is a special type of function which calls itself directly or indirectly.
- It solves a problem by breaking it down into smaller instances of the same problem.
- Recursion is commonly used to solve problems that can be divided into simpler, similar problems.

### How Recursion Works?
- A recursion has two cases:
    - **Base case:** The condition where the function stops calling itself and returns a value.
    - **Recursive case:** The part where the function call itself with a modified input.

- The function keeps calling itself until it reaches the base condition.

### Examples
#### 1.  Factorial Calculation  
```c
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    }
    return n * factorial(n-1); // Recursive case
}
// The called copies starts returning values to the calling copies of function when the base condition is found.
```
![Factorial Calculation Recursion Calls](/assets/images/recursion-calls-factorial-calculation.png "The structure of the calls that a recusive function makes while finding factorial of a number.")

#### 2. Finding Fibonacci Number
```c
int fibonacci(int n) {
    if(n <= 1) {
        return n; // Base case
    }
    return fibonacci(n-1) + fibonacci(n-2); // Recursive case
}
```
![Finding Fibonacci Numbe Recursion Calls](/assets/images/recursion-calls-finding-fibonacci-number.png "The structure of the calls that a recusive function makes while finding a fibonacci number at a given position.")

### Advantages of Recursion
- Provides a clean and elegent way to write codes.
- Some problems are inherently recursive, such as tree traversals or the tower of Hanoi.

### Drawbacks of Recursion
- Recursion can lead to stack overflow if not handled properly.
- It may have higher resource and time usage compared to iterative solutions.

---
