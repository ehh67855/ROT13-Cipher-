# ROT13 Cipher in C

This project is a simple implementation of the ROT13 (rotate by 13 places) cipher in C. ROT13 is a substitution cipher used primarily for obscuring text, such as spoilers or puzzle solutions. It works by replacing each letter with the 13th letter after it in the alphabet.

## Features

- **Simple Implementation:** Written in straightforward C language.
- **Command-Line Interface:** Easy to run and test from the command line.
- **Supports Upper and Lowercase:** Properly handles both uppercase and lowercase letters.
- **Non-Letter Handling:** Non-letter characters are not modified.

## Requirements

- A C compiler (like GCC or Clang)
- Basic understanding of running C programs from the command line

## Compilation

To compile the program, use a C compiler such as GCC. For example:

```bash
gcc -o rot13cipher lab10.c

### Usage
** After compiling, you can run the program by passing a string as an argument **:
- ./rot13cipher "Your Text Here"

### Example
**Input:** ./rot13cipher "Hello World"
**Output:** Uryyb Jbeyq



