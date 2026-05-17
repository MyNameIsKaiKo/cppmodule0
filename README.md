*This project has been created as part of the 42 curriculum by jleray.*

# C++ Module 00

## Description

C++ Module 00 is the first module in the 42 C++ series. It serves as an introduction to the core concepts of Object-Oriented Programming (OOP) using C++98. The goal is to get familiar with the language's syntax and foundational concepts such as namespaces, classes, member functions, initialization lists, and basic I/O streams — before diving into more complex topics in later modules.

The module contains three exercises of increasing complexity:

- **ex00 – Megaphone**: A simple warm-up exercise that takes command-line arguments and outputs them in uppercase. Introduces basic string manipulation and the standard I/O stream.
- **ex01 – My Awesome PhoneBook**: Implements a basic phonebook application using two classes (`PhoneBook` and `Contact`). Covers class design, encapsulation, and user interaction via the terminal.
- **ex02 – The Job Of Your Dreams**: Reconstructs a missing source file (`Account.cpp`) by matching its output against a provided log file. Tests the ability to read and implement from a specification.

## Instructions

### Requirements

- A C++98-compliant compiler (`c++`, `g++`, or `clang++`)
- `make` utility

### Compilation

Each exercise has its own `Makefile`. Navigate to the exercise directory and run:

```bash
make
```

This will produce an executable (typically named after the exercise or `a.out`). To clean compiled objects:

```bash
make clean   # removes .o files
make fclean  # removes .o files and the binary
make re      # fclean + make
```

### Execution

**ex00 – Megaphone**
```bash
./megaphone "Hello World" "foo bar"
# Output: HELLO WORLD FOO BAR
```

**ex01 – My Awesome PhoneBook**
```bash
./phonebook
# Then use ADD, SEARCH, or EXIT commands interactively
```

**ex02 – The Job Of Your Dreams**
```bash
./account
# Runs the tests defined in tests.cpp and outputs the account log
```

## Resources

### AI Usage

- **Claude** was used to generate this README.
- **Gemini** was used to understand how the class system works in C++, including concepts such as access specifiers, member functions, and encapsulation.
