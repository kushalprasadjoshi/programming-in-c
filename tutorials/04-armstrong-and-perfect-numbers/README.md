# Assignment 04: Armstrong Numbers and Perfect Numbers

## Questions
1. **Wap to find if a number is perfect number or not.**   
> (Hint: A number is perfect if the sum of the factors of the number is equal to the number.  
Eg: 28 is a perfect number since sum of its factors 1+2+4+7+14=28)  

2. **WAP to find if a number is Armstrong's number.**  
> (Hint: a number is Armstrong if the sum of its digit raised to a power is equal to the number.   
   The power is equal to the number of digits.)

---

## Solution of 1
```c
/*
WAP to find if a number is perfect number or not.
(Hint: A number is perfect if the sum of the factors of the number is equal to the number.
Eg: 28 is a perfect number since sum of its factors 1+2+4+7+14=28)
*/

#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}
```

**Output:**
```output
Enter a number: 28
28 is a perfect number.
```

### Solution Using Function
```c
/*
WAP to find if a number is perfect number or not.
(Hint: A number is perfect if the sum of the factors of the number is equal to the number.
Eg: 28 is a perfect number since sum of its factors 1+2+4+7+14=28)
*/

// This is the solution using the function

#include <stdio.h>
// Function to check if a number is a perfect number
int isPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPerfectNumber(number))
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}
```

**Output:**
```output
Enter a number: 28
28 is a perfect number.
```

---

## Solution of 2
```c
/*
WAP to find if a number is Armstrong's number.
Hint:
    A number is Armstrong if the sum of its digit raised to a power is equal to the
    number. The power is equal to the number of digits.
Example:
     153 = 13 + 53 +  33  and
     1634 =  14 + 64 + 34 + 44
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // power 3 since digits length = 3 
    // power 4 since digits length = 4 
    int number, originalNumber, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
    // Counting the number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    // Calculating result
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    if (result == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
```

**Output:**
```output
Enter a number: 1634
1634 is an Armstrong number.
```

### Solution Using Function
```c
/*
WAP to find if a number is Armstrong's number.
Hint:
    A number is Armstrong if the sum of its digit raised to a power is equal to the
    number. The power is equal to the number of digits.
Example:
     153 = 13 + 53 +  33  and
     1634 =  14 + 64 + 34 + 44
*/

// Solution using the function

#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int numberOfDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrongNumber(int num)
{
    int originalNum = num;
    int sum = 0;
    int power = numberOfDigits(num);
    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }
    return (sum == originalNum);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrongNumber(number))
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
```

**Output:**
```output
Enter a number: 153
153 is not an Armstrong number.
```

---
