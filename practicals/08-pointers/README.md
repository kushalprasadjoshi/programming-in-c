# Lab 08: Pointers

## Objective
To introduce participants the basics of pointers in C programming.

---

## Agenda
1. [WAP to swap values using call by refrence method.](./01-swap-using-call-by-reference.c)
2. [Record a 1D array of two integer elements using pointer notation and find the sum and average.](./02-sum-and-average-of-numbers-using-pointers.c)
3. [Write the given code and analyze the output.](./03-pointers-and-memory.c)

---

## Requirements
1. **Code Edioter**
2. **C Compiler**
3. **Computer** with the required softwares installed.

---

## Theory

### Pointers
A pointer is a variable that holds the address of another variable in memory. It allows you to indirectly access and manipulate the values stored at address.

#### Advantages
- Efficient memory access.
- Dynamic memory management.
- Powerful data structure.

#### Disadvantages
- Requires careful handling to avoid errors.
- Complex concept.
- A good knowledge of memory is required.

---

## Experiment 1
```c
/*
WAP to swap using functions.
Pass address of two number as arguments to the function.
*/

#include <stdio.h>

// Function to swap two numbers using call by reference
void swapValues(int *value1, int *value2)
{
    *value1 = *value1 + *value2;
    *value2 = *value1 - *value2;
    *value1 = *value1 - *value2;
}

int main(int argc, char const *argv[])
{
    int a, b;

    // Read values from user
    printf("Enter two numbers to swap: ");
    scanf("%d%d", &a, &b);

    // Print values before swapping
    printf("Before swapping: %d and %d\n", a, b);

    // Call swapValue function to swap values
    swapValues(&a, &b);

    // Print values after swapping
    printf("After swapping: %d and %d\n", a, b);

    return 0;
}
```

**Output:**
```output
Enter two numbers to swap: 3 5
Before swapping: 3 and 5
After swapping: 5 and 3
```

---

## Experiment 2
```c
/*
Read a 1D array of 10 integer elements using pointer notation and find sum and average of the elements.
*/

#include <stdio.h>

// Function to find sum of numbers using pointer notation
int sumOfIntegers(int *pointer)
{
    int sum = 0;
    // Use for loop to access the elements sequencely
    for (int i = 0; i < 10; i++)
    {
        sum += *(pointer + i);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int integers[10];

    // Read integers from user
    printf("Enter any 10 numbers to find sum: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", integers + i);
    }

    // Call sumOfIntegers function to find sum and print output
    printf("The sum is %d\n", sumOfIntegers(integers));
    printf("The average is %f\n", sumOfIntegers(integers) / (float) 10);

    return 0;
}
```

**Output:**
```output
Enter any 10 numbers to find sum: 1 2 3 4 5 6 7 8 9 10
The sum is 55
The average is 5.500000
```

---

## Experiment 3
```c
/*
Write the given code and note the output.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p;
    p = &a;

    // Print
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("p + 1 = %p\n", p + 1);

    return 0;
}
```

**Output:**
```output
a = 10
&a = 0061FF18
p = 0061FF18
*p = 10
p + 1 = 0061FF1C
```

---

## Discussion
Basic concepts about the pointers was gained.

Following types of programming was done to gain confidence in pointers:
- Swapping values of variables by using call by reference method.
- Reading 1D array using pointers and finding sum and average of integers in it.
- Printing some data i.e. memory address or data in variable.

---

## Conclusion
The participants gained confidence in the programming using pointers, which enhace the confident in programming of participants. The participants also know about how the memory actually works.

---
