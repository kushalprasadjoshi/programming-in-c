# Assignment 01: Algorithms and Flow Charts

## Questions
**Write an algorithm and draw a flowchart for each of the following problems:**
1.      2, 4, 6, 8, 10, ... up to n.
2.      1 + 2 + 3 + 4 + ... up to n terms.
3.      2, 4, 8, 16, 32, ... up to n.
4.      1 * 2 * 3 * 4 * ... up to n terms.

---

## Solution of 1
**Question:** 2, 4, 6, 8, 10, ... up to n.

### Algorithm 
```
1. Start  
2. Read n  
3. Calculate a = 2  
4. Is a <= 2?  
    4.1. Yes  
        4.1.1. Write a  
        4.1.2. a = a + 2  
        4.1.3. Go to 4  
5. End  
```

### Flowchart
![Flowchart to Print Even Numbers](/assets/flowcharts/even-numbers.png "Flow chart of printing 2, 4, 6, 8, 10, ... up to n.")

---

## Solution of 2
**Quesiton:** 1 + 2 + 3 + 4 + ... up to n terms.

### Algorithm
```
1. Start
2. Read n
3. Calculate a = 1, sum = 0
4. Is a <= n?
    4.1. Yes
        4.1.1. sum = sum + a
        4.1.2. a = a + 1
        4.1.3. Go to 4
    4.2. No
        4.2.1. Write sum
5. End
```

### Flowchart
![Flowchart to Find Sum](/assets/flowcharts/sum-of-numbers.png "Flow chart of finding 1 + 2 + 3 + 4 + ... up to n terms.")

---

## Solution of 3
**Question:** 2, 4, 8, 16, 32, ... up to n.

### Algorithm
```
1. Start
2. Read n
3. Calculate a = 2
4. Is a <= n?
    4.1. Yes
        4.1.1. Write a
        4.1.2. a = a * 2
        4.1.3. Go to 4
5. End
```

### Flowchart
![Flowchart to print Exponential Growth](/assets/flowcharts/exponential-growth.png "Flow chart of printing 2, 4, 8, 16, 32, ... up to n.")

---

## Solution of 4
**Question:** 1 * 2 * 3 * 4 * ... up to n terms.

### Algorithm
```
1. Start
2. Read n
3. Calculate a = 1, mul = 1
4. Is a <= n?
    4.1. Yes
        4.1.1. mul = mul * a
        4.1.2. a = a + 1
        4.1.3. Go to 4
    4.2. No
        4.2.1. Write mul
5. End
```

### Flowchart
![Flowchart to Find Product](/assets/flowcharts/multiplication-of-numbers.png "Flow chart of finding 1 * 2 * 3 * 4 * ... up to n terms.")

---
