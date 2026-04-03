# C++ Unix Shell Implementation

A custom POSIX-compliant shell built from scratch in C++. This project explores the fundamentals of command-line interfaces, process management, and terminal I/O.

## Features
- **REPL Architecture:** Implements a standard Read-Eval-Print Loop for continuous command processing.
- **Built-in Commands:** Custom implementations of `echo` and `exit`.
- **String Parsing:** Robust tokenization of user input to separate commands from arguments.
- **I/O Buffering:** Manual management of standard output streams to ensure real-time feedback.

## Technical Highlights
- **Language:** C++17
- **Logic:** Utilizes `std::getline` for input and `std::unitbuf` for non-buffered output.
- **Safety:** Implements boundary checking to prevent memory faults during string manipulation.

## Running the Project
1. Clone the repository.
2. Execute the build script: ./run.sh
