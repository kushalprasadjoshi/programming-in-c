# Assignment 02: Control Statements Theory

## Control Statements
Control statements are fundamental constructs in programming that allow you to control the flow of execution of your code. They enable you to make decisions, repeat actions, and branch your code based on certain conditions. The main types of control statements include:
- [Conditional Statements](#conditional-statements)
    - [Decision Making Statements](#decision-making-statements)
        - [If Statement](#if-statement)
        - [If-else Statement](#if-else-statement)
        - [Else-if Statement](#else-if-statement)
        - [Switch Statement](#switch-statement)
    - [Looping Statements](#looping-statements)
        - [For Loop](#for-loop)
        - [While Loop](#while-loop)
        - [Do-While Loop](#do-while-loop)
- [Unconditional Statements](#unconditional-statements)
    - [Continue Statement](#continue-statement)
    - [Break Statement](#break-statement)
    - [Goto Statement](#goto-statement)

Understanding and using control statements effectively is crucial for writing efficient and readable code.

---

## Conditional Statements
Conditional statements allow a program to take different actions based on whether a condition is true or false. They are essential for decision-making in code. The primary conditional statements in C are:

### Decision Making Statements

#### If Statement
The `if` statement evaluates a condition. If the condition is true, the code block inside the `if` statement is executed.

```c
if (condition) {
    // code to be executed if condition is true
}
```

#### If-else Statement
The `if-else` statement provides an alternative code block that executes if the condition is false.

```c
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
```

#### Else-if Statement
The `else-if` statement allows you to check multiple conditions sequentially.

```c
if (condition1) {
    // code to be executed if condition1 is true
} else if (condition2) {
    // code to be executed if condition2 is true
} else {
    // code to be executed if both conditions are false
}
```

#### Switch Statement
The `switch` statement allows a variable to be tested for equality against a list of values, each with its own code block.

```c
switch (variable) {
    case value1:
        // code to be executed if variable equals value1
        break;
    case value2:
        // code to be executed if variable equals value2
        break;
    // you can have any number of case statements
    default:
        // code to be executed if variable doesn't match any case
}
```

### Looping Statements

Looping statements allow a set of instructions to be executed repeatedly based on a condition. They are essential for tasks that require repetition. The primary looping statements in C are:

#### For Loop
The `for` loop is used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.

```c
for (initialization; condition; increment/decrement) {
    // code to be executed
}
```

Example:
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

#### While Loop
The `while` loop is used when the number of iterations is not known beforehand. It continues to execute as long as the condition is true.

```c
while (condition) {
    // code to be executed
}
```

Example:
```c
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
```

#### Do-While Loop
The `do-while` loop is similar to the `while` loop, but it guarantees that the code block is executed at least once because the condition is evaluated after the code block.

```c
do {
    // code to be executed
} while (condition);
```

Example:
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 10);
```

---

## Unconditional Statements
Unconditional statements allow the program to change the flow of execution without any condition. They are used to control the flow of the program in a direct manner. The primary unconditional statements in C are:

### Continue Statement
The `continue` statement skips the current iteration of a loop and proceeds with the next iteration.

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue; // skip the rest of the code inside the loop for this iteration
    }
    printf("%d\n", i);
}
```

### Break Statement
The `break` statement terminates the loop or switch statement and transfers execution to the statement immediately following the loop or switch.

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // exit the loop
    }
    printf("%d\n", i);
}
```

### Goto Statement
The `goto` statement transfers control to the labeled statement. It is generally advised to avoid using `goto` as it can make the code harder to read and maintain.

```c
int i = 0;
start:
printf("%d\n", i);
i++;
if (i < 10) {
    goto start; // jump to the labeled statement
}
```

Understanding and using unconditional statements effectively is important for managing the flow of your program, especially in complex scenarios.

---
