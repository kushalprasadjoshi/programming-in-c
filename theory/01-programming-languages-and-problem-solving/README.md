# Programming Languages and  Problem Solving

## Computer Architecture and Hardware
![Computer Architecture and Hardware](/assets/images/hardware-architecture.png "Digram of the computer architecture and hardware.")

Computer Architecture refers to the design and organization of a computer's core components, including the central processing unit (CPU), memory, input/output (I/O) devices, and storage. Understanding computer architecture is crucial for optimizing software performance and making informed decisions about hardware requirements.

**Central Processing Unit (CPU):** 
The CPU is the brain of the computer, responsible for executing instructions and performing calculations. It consists of the arithmetic logic unit (ALU), control unit (CU), and registers. The ALU handles arithmetic and logical operations, while the CU directs the flow of data and instructions within the system.

**Memory (Primary Memory):** 
Memory is used to store data and instructions that the CPU needs to access quickly. There are two main types of memory: volatile memory (RAM) and non-volatile memory (ROM). RAM is used for temporary storage while the computer is running, whereas ROM retains data even when the computer is turned off.

**Input/Output (I/O) Devices:** 
I/O devices allow the computer to interact with the external world. Input devices, such as keyboards and mice, enable users to provide data to the computer. Output devices, such as monitors and printers, allow the computer to present information to users.

**Storage (Secondary Memory):** 
Storage devices, such as hard drives and solid-state drives (SSDs), provide long-term data storage. They retain data even when the computer is powered off and are essential for storing the operating system, applications, and user data.

Understanding these components and their interactions is fundamental to both hardware and software development, as it impacts system performance, efficiency, and capabilities.

---

## Computer Software
Computer software refers to the collection of programs, procedures, and data that instruct a computer on how to perform specific tasks. Software can be broadly categorized into two types: system software and application software.

### 1. System Software
System software serves as the foundation for application software, managing the hardware and basic system operations. It includes:
- **Operating Systems (OS):** These are essential for managing hardware resources and providing a user interface. Examples include Windows, macOS, Linux, and Android.
- **Device Drivers:** These programs allow the operating system to communicate with hardware devices like printers, graphics cards, and network adapters.
- **Utility Programs:** These perform maintenance tasks such as disk cleanup, antivirus scanning, and file management.

### 2. Application Software
Application software is designed to help users perform specific tasks or applications. It includes:
- **Productivity Software:** Tools like word processors, spreadsheets, and presentation software (e.g., Microsoft Office, Google Workspace).
- **Media Software:** Programs for creating and editing multimedia content, such as photo editors, video editors, and music production software (e.g., Adobe Photoshop, Final Cut Pro).
- **Web Browsers:** Applications for accessing and navigating the internet (e.g., Google Chrome, Mozilla Firefox).
- **Games:** Software designed for entertainment and recreation.

---

## Computer Programming
Process of giving commands and instructions to a computer to perform some tasks. It involves writing code in a programming language, which is then translated into machine language so that the computer can understand and execute. Programming is essential for creating software applications, automating tasks, and solving complex problems efficiently.

### Importance of Programming
Programming is a fundamental skill in the modern world. It enables the creation of software that powers everything from simple applications to complex systems. Understanding programming concepts helps with logical thinking, problem-solving, and the ability to automate repetitive tasks. It also opens numerous career opportunities in various fields such as software development, data science, artificial intelligence, and more.

### Software Development
The process of creating software involves several stages, including requirements analysis, design, coding, testing, and maintenance. Software development methodologies, such as Agile and Waterfall, provide frameworks for managing these stages effectively.

Understanding computer software is essential for leveraging technology to solve problems, enhance productivity, and create innovative solutions in various domains.

---

## Programming Languages
Programming languages are formal languages comprising a set of instructions that produce various kinds of output. They are used to implement algorithms and control the behavior of machines. Each programming language has its own syntax and semantics, which define the structure and meaning of the code written in that language.

### Types of Programming Languages
- **Low-level languages:** These include machine language and assembly language, which are closer to the hardware and provide little or no abstraction from the computer's instruction set architecture.

- **High-level languages:** These are more abstract and closer to human languages, making them easier to read, write, and maintain. Examples include Python, Java, C++, and JavaScript.

- **Scripting languages:** These are often used for automating tasks and writing small programs. Examples include Python, Ruby, and Perl.

- **Domain-specific languages:** These are specialized languages designed for specific tasks. Examples include SQL for database queries and HTML for web page structure.

### Generations of Programming Languages
![Generations of Programming Languages](/assets/images/programming-languages.png "A clear diagram explaining the generation of languages with low and high level types.")

Programming languages have evolved over time, and they are often categorized into different generations based on their level of abstraction and features.

1. **First Generation (1GL) / Machine Language:** 
    The most basic level of programming language, consisting of binary code (0s and 1s) that the computer's CPU can execute directly. It is highly efficient but extremely difficult for humans to read and write.

2. **Second Generation (2GL) / Assembly Language:** 
    A low-level programming language that uses symbolic names (mnemonics) to represent machine-level instructions. It is slightly easier to read and write than machine language but still requires detailed knowledge of the computer's architecture.

3. **Third Generation (3GL) / High-Level Languages:** 
    These languages are more abstract and closer to human languages, making them easier to read, write, and maintain. They include languages like C, C++, Java, and Python. They require a compiler or interpreter to translate the high-level code into machine code.

4. **Fourth Generation (4GL) / Very High-Level Languages:** 
    These languages are designed to be even more user-friendly and efficient for specific tasks. They often include database query languages (e.g., SQL), report generators, and application generators. They allow developers to specify what they want to achieve without detailing how to do it.

5. **Fifth Generation (5GL) / Natural Language Processing Languages:** 
    These languages are based on solving problems using constraints given to the program, rather than using an algorithm written by a programmer. They are often used in artificial intelligence and expert systems. Examples include Prolog and Mercury.

Understanding the evolution of programming languages helps in appreciating the advancements in software development and the increasing ease with which complex problems can be solved.

### Programming Approaches

1. **Procedural Oriented Programming (POP):**
    Procedural Oriented Programming is a programming paradigm based on the concept of procedure calls, where statements are structured into procedures (also known as routines or functions). It emphasizes a linear top-down approach and the use of procedures to operate on data. POP is characterized by its simplicity and ease of understanding, making it suitable for beginners. Examples of procedural programming languages include C, Pascal, and Fortran.

2. **Object Oriented Programming (OOP):**
    Object Oriented Programming is a programming paradigm based on the concept of "objects", which can contain data and code to manipulate that data. OOP focuses on the principles of encapsulation, inheritance, and polymorphism. It allows for the creation of modular, reusable, and maintainable code. OOP is widely used in software development for its ability to model real-world entities and relationships. Examples of object-oriented programming languages include Java, C++, Python, and Ruby.

### Code Conversion

Code conversion is the process of translating code written in one form into another form that a computer can execute. This process is essential for running programs written in high-level languages on a computer's hardware. There are three main types of code conversion: assembly, compilation, and interpretation.

- **Assembler:**
An assembler is a tool that converts assembly language code into machine code. Assembly language is a low-level programming language that uses symbolic names to represent machine-level instructions. The assembler translates these symbolic names into binary code that the computer's CPU can execute directly. This process is crucial for creating efficient and optimized machine code from human-readable assembly instructions.

- **Compiler:** 
A compiler is a program that translates code written in a high-level programming language into machine code. The compilation process involves several stages, including lexical analysis, syntax analysis, semantic analysis, optimization, and code generation. The resulting machine code can be executed directly by the computer's CPU. Compilers are used for languages like C, C++, and Java, and they produce highly optimized code that can run efficiently on the target hardware.

- **Interpreter:**
An interpreter is a tool that executes code written in a high-level programming language directly, without converting it into machine code beforehand. Instead, the interpreter reads and executes the code line by line at runtime. This approach allows for more flexibility and easier debugging, as changes to the code can be tested immediately. However, interpreted code is generally slower than compiled code because the translation happens at runtime. Examples of interpreted languages include Python, Ruby, and JavaScript.

Understanding these code conversion methods is essential for software development, as it impacts the performance, efficiency, and portability of the resulting programs.

---

## Algorithms
Algorithms are a sequential approach to performing a task.

**Syntax:**
```
Step 1: Start
Step 2: Input
Step 3: Processing
Step 4: Output
Step 5: End
```

**Example:** Algorithm to add two numbers.
```
Step 1: Start
Step 2: Read a, b
Step 3: c = a + b
Step 4: Write c
Step 5: End
```

### Characteristics of a Good Algorithm

A good algorithm should possess the following characteristics:

1. **Correctness:** The algorithm should produce the correct output for all possible valid inputs.
2. **Efficiency:** The algorithm should make efficient use of resources, such as time and memory.
3. **Finiteness:** The algorithm should terminate after a finite number of steps.
4. **Definiteness:** Each step of the algorithm should be precisely defined and unambiguous.
5. **Input:** The algorithm should have zero or more inputs.
6. **Output:** The algorithm should have one or more outputs.

Understanding these characteristics helps in designing effective algorithms that can solve problems efficiently and correctly.

---

## FLowcharts
The diagrammatic representation of algorithm is called flow chart.

### Flowchart Symbols
Flowcharts use specific symbols to represent different types of actions or steps in a process. Here are some common flowchart symbols:
- **Oval:** Represents the start or end of a process.
- **Rectangle:** Represents a process or operation.
- **Diamond:** Represents a decision point.
- **Parallelogram:** Represents input or output.
- **Arrow:** Indicates the flow of the process.

![Flowchart Symbols](/assets/flowcharts/symbols.png "Symbols used in flow chart.")

Understanding flowcharts helps in visualizing the steps involved in a process, making it easier to design and communicate algorithms effectively.

![Syntax and Example](/assets/flowcharts/syntax-and-example.png "The diagram showing the syntax and example of a simple flowchart.")

---

## Exercises

**1. Write an algorithm and draw a flowchart to claculate the area and perimeter of Rectangle.**

Algorithm:
```
S1: Start
S2: Read l, b
S3: P = 2 * (l + b)
S4: A = l * based
S5: Write P, A
S6: End
```

Flowchart:  
![Flowchart](/assets/flowcharts/perimeter-and-area.png "Flowchart to calculate area and perimeter.")

**2. Write an algorith to find number is even or odd and draw flowchart.**

Algorithm:
```
S1: Start
S2: Read num
S3: Is num mod 2 == 0?
    3.1: Yes
        3.1.1: Write even
    3.2: No 
        3.2.2: Write odd
S4: End
```

Flowchart:   
![Flowchart](/assets/flowcharts/even-or-odd.png "Flowchart to even or odd numbers.")


**3. Write an algorithm and draw a flowchart to find greatest number among a and b.**

Algorith:
```
1: Start
2: Read a, b
3: Is a > b?
    3.1: Yes
        3.1.1: Write a
    3.2: No
        3.2.1: Write b
4: End
```

Flowchart:  
![Flowchart](/assets/flowcharts/greatest-among-two.png "Flowchart to find greatest number among two numbers a and b.")

**4. Write an algorithm and draw a flowchart to convert Celsius to Fahrenheit.**

Algorith:  
```
1. Start
2. Read C
3. F = 9 * C / 5 + 32
4. Write F
5. End
```

Flowchart:  
![Flowchart](/assets/flowcharts/celsius-to-fahrenheit.png "Flowchart to convert Celsius to Fahrenheit.")

**5. Write an algorithm and draw a flowchart to find roots of quadratic equation.**

Algorithm:  
```
1. Start
2. Read a, b, c
3. d = b*b - 4*a*c
4. Is d > 0?
    4.1. Yes
        4.1.1. r1 = (-b + sqrt(d)) / (2 * a)
        4.1.2. r1 = (-b - sqrt(d)) / (2 * a)
        4.1.3. Write r1, r2
    4.2. No
        4.2.1. Is d = 0?
            4.2.1.1. Yes
                4.2.1.1.1. r = -b / (2 * a)
                4.2.1.1.1. Write r
            4.2.1.2. No
                4.2.1.2.1. rp = -b / (2 * a)
                4.2.1.2.2. ip = sqrt(abs(d)) / (2 * a)
                4.2.1.2.3. Write rp + ip, rp - ip
5. End
```

Flowchart:  
![Flowchart](/assets/flowcharts/roots-of-quardatic.png "Flowchart to find roots of quardatic equation.")

**6. Write an algorithm and draw a flowchart to find if a year is leaping year.**
> HINT:  
    If year % 4 = 0 --> a leap year  
    If year % 100 = 0 --> not a leap year  
    If year % 400 = 0 --> a leap year  

Algorithm:  
```
1. Start
2. Read year
3. Is year % 4 == 0?
    3.1. Yes
        3.1.1. Is year % 100 == 0?
            3.1.1.1. Yes
                3.1.1.1.1. Is year % 400 == 0?
                    3.1.1.1.1.1. Yes
                        3.1.1.1.1.1.1. Write a leap year.
                    3.1.1.1.1.2. No
                        3.1.1.1.1.2.1. Write not a leap year.
            3.1.1.2. No
                3.1.1.2.1. Write a leap year
    3.2. No
        3.2.1. Write not a leap year.
4. End
```

Flowchart:  
![Flowchart](/assets/flowcharts/find-leap-year.png "Flowchart to distinguish between a leap year and other non-leap years.")

**7. Write an algorithm and flowchart to print from 1 to 10.**

Algorithm(Pre-Test Model):  
```
1. Start
2. Calculate a = 1
3. Is a <= 10? 
    3.1. Yes
        3.1.1. Write a
        3.1.2. a = a + 1
        3.1.3. Go to 4
4. End
```

Algorithm(Post-Test Model):  
```
1. Start
2. Calculate a = 1
3. Write a
4. Is a <= 10? 
    4.1. Yes
        4.1.1. a = a + 1
        4.1.2. Go to 4
5. End
```

Flowchart:  
![Flowchart](/assets/flowcharts/numbers-up-to-ten.png "Flowchart to print numbers from 1 to 10.")

**8. Write an algorithm and flowchart to print from 1 to n.**

Algorithm(Pre-Test Model):  
```
1. Start
2. Read n
3. Calculate a = 1
4. Is a <= n? 
    4.1. Yes
        4.1.1. Write a
        4.1.2. a = a + 1
        4.1.3. Go to 4
5. End
```

Algorithm(Post-Test Model):  
```
1. Start
2. Read n
3. Calculate a = 1
4. Write a
5. Is a <= 10? 
    5.1. Yes
        5.1.1. a = a + 1
        5.1.2. Go to 4
6. End
```

Flowchart:  
![Flowchart](/assets/flowcharts/numbers-up-to-n.png "Flowchart to print numbers from 1 to n.")

**9. Write an algorithm and draw a flowchart to find palindrome number.**
> HINT:
    The number should be same from both LHS and RHS.
    e.g. 12321 is a palindrome number.  

Algorithm:  
```
1. Start
2. Read num
3. Calculate rev = 0, m = num
4. Calculate r = num % 10
5. Calculate num = num /10
6. Calculate rev = rev * 10 + r
7. Is num != 0?
    7.1. Yes
        7.1.1. Go to 4
8. Is rev = m?
    8.1. Yes
        8.1.1. Write a palindrome number.
    8.2. No
        8.2.1. Write not a palindrome number.
9. End
```

Flowchart:  
![Flowchart](/assets/flowcharts/find-palindrome-number.png "Flowchart to check if a number is palindrome or not.")

Alternative Algorithm:
```
1. Start
2. Read num
3. Calculate rev = 0, m = num
4. Is num != 0?
    4.1. Yes
        4.1.1. Calculate r = num % 10
        4.1.2. Calculate num = num / 10
        4.1.3. Calculate rev = rev * 10 + r
        4.1.4. Go to 4
5. Is rev = m?
    5.1. Yes
        5.1.1. Write a palindrome number.
    5.2. No
        5.2.1. Write not a palindrome number.
6. End
```

---
