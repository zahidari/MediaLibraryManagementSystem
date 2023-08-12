# Media Library Management System

Welcome to the Media Library Management System repository! 
This project is part of the "Praktikum Informatik 1" course at RWTH University. 
It focuses on concepts like inheritance, polymorphism, and object-oriented programming in C++.
The project simulates a media library system where users can manage and interact with 
various types of media items such as books, magazines, and DVDs.

## Project Overview

The Media Library Management System project consists of a C++ program that allows 
users to perform several actions related to managing media items in a library.
These actions include adding new media items, removing existing items, lending items to users, 
and returning them. The program also demonstrates the concept of polymorphism by allowing 
different types of media items to be handled using a common base class pointer.

## Features

- Adding different types of media items: books, magazines, and DVDs.
- Removing media items from the library.
- Lending and returning media items.
- Polymorphic behavior to handle various media types.
- Basic user interface for interacting with the program.
- Proper memory management to avoid memory leaks.

## How to Use

1. Clone the repository to your local machine.
2. Compile the source files using a C++ compiler.
3. Run the compiled executable to interact with the media library management system.

## Code Structure

The repository contains the following main components:

- `Buecherei.cpp`: The main program file that coordinates user interaction and media management.
- `Medium.h`, `Datum.h`, `Magazin.h`, `Buch.h`, `DVD.h`: Header files defining the classes and their member functions.
- `Medium.cpp`, `Datum.cpp`, `Magazin.cpp`, `Buch.cpp`, `DVD.cpp`: Implementation files for the defined classes.

## Prerequisites

- C++ compiler (e.g., g++)
- Standard C++ library

## Contributors

##########################################################################################################

This project was completed by https://github.com/zahidari as part of the "Praktikum Informatik 2" course at RWTH University.

##########################################################################################################
##########################################################################################################
##########################################################################################################

Here are the topics related to terminology used in this code:


1. Commenting and Documentation:
   - Use of comments to provide explanations and information about the code's purpose.
   - Use of file-level comments to describe the purpose of the file and its content.

2. Conditional Compilation:
   - The use of preprocessor directives to conditionally include or exclude certain parts of the code based on the defined macro (`UNTERKLASSENVORHANDEN`).
   - Example: `#if UNTERKLASSENVORHANDEN` and `#endif` around class inclusion statements.

3. Header Files Inclusion:
   - Inclusion of standard library header files (`<iostream>`, `<string>`, `<vector>`).
   - Inclusion of user-defined header files (`"Medium.h"`, `"Datum.h"`, `"Magazin.h"`, `"Buch.h"`, `"DVD.h"`).

4. Class and Object Usage:
   - Definition of various classes (`Medium`, `Datum`, `Magazin`, `Buch`, `DVD`) and their member functions.
   - Creation and usage of objects from these classes.
   - Polymorphic behavior using pointers to the base class `Medium` for managing different types of media objects.

5. Data Structures:
   - Use of the `std::vector` container to store and manage collections of `Medium*` pointers.

6. Control Flow:
   - Use of conditional statements (`if`, `else`) to handle user choices and inputs.
   - Use of `switch` statements for menu selection.

7. Input and Output:
   - Input and output operations using `std::cin`, `std::cout`, and `std::getline`.
   - Handling of various data types (integers, strings, dates) as input.

8. Memory Management:
   - Creation of objects using dynamic memory allocation (`new` operator) and pointers.
   - Proper deletion of dynamically allocated objects (`delete` operator) to prevent memory leaks.

9. Function Definitions and Declarations:
   - Function declarations and definitions for various operations such as adding, removing, and processing media items.

10. Function Overloading:
    - Overloading of constructors and member functions in different media classes.

11. Object Interaction:
    - Interaction between objects and functions for adding, removing, and processing media items.
    - Object interaction for lending and returning media items.

12. Polymorphism:
    - Utilizing polymorphism to work with different types of media objects using a common base class pointer.

13. Loops:
    - Use of `do-while` loop for menu-based interaction.

14. Handling Date:
    - Use of the `Datum` class to handle and manipulate dates.

15. Data Output and Formatting:
    - Displaying media information using member function calls, including formatting.

16. Program Structure:
    - `main` function acting as the entry point and coordinating user interaction and operations.
    - Segmentation of code into functions for various operations (adding, removing, lending, returning, etc.).

17. Clean-Up:
    - Properly releasing dynamically allocated memory using `delete` in the `main` function to prevent memory leaks.
