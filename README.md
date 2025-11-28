# C - Printf

![GCC v15.2](https://img.shields.io/badge/GCC-v15.2-blue)
![VIM v9.1.1825](https://img.shields.io/badge/VIM-v9.1.1825-green)
![ubuntu 20.04](https://img.shields.io/badge/ubuntu-20.04-orange)
![Betty](https://img.shields.io/badge/Style-Betty-yellow)



## Table of Contents

- [Project Description](#project-description)
- [Command Used for Compiling](#command-used-for-compiling)
- [Flowchart Diagram](#flowchart-diagram)
- [Usage Examples](#usage-examples)
- [Execution Variables](#execution-variables)
- [Printf Explanation](#printf-explanation)
- [Requirements to Run](#requirements-to-run)
- [Return Values](#return-values)
- [Man Page](#man-page)
- [Technical Testing Environment](#technical-testing-environment)

---

## Project description :

In this project, we need to create our own printf function. Printf is a C standard library function that formats text and writes it to standard output. The function accepts a format c-string argument and a variable number of value arguments that the function serializes per the format string.

---

## Command used for compiling :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

All `.c` files in the project are compiled together with the flags required by the project.

---

## Flowchart diagram :

<img width="615" height="815" alt="image" src="https://github.com/user-attachments/assets/5183e699-c686-4c19-86dd-1c32381a5f59" />

The flowchart shows the basic logic of `_printf`: read the format string, detect `%`, select the correct function for the specifier, print the argument, and update the character count.

---

## Usage examples :

```c
int _printf(const char *format, ...);
```

---

## Man page :

A manual page is provided in the repository (`man_3_printf`).

- **Name:** `_printf` - formatted output conversion
- **Synopsis:** `int _printf(const char *format, ...);`
- **Description:** Prints output according to `format` and additional arguments
- **Return value:** Number of characters printed, or `-1` on error

---

## Execution variables :

The main execution variables in `_printf` are:

-
-
-

---

## Printf explanation :

`_printf` is a **variadic function**, which means it can receive a variable number of arguments using the `...` syntax and the macros `va_start`, `va_arg`, and `va_end` from `stdarg.h`.

The function scans the format string character by character:
- When it finds a normal character, it prints it directly
- When it finds `%`, it checks the next character to handle the corresponding argument

Supported format specifiers:
- `%c` prints a single character
- `%s` prints a string of characters
- `%d` / `%i` prints signed integers
---

## Requirements

- Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
- No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples
+ The prototypes of all your functions should be included in your header file called main.h
- Don't forget to push your header file
* All your header files should be include guarded

---

## Requirements to execute :

- C environment & standard library
* stdio.h header
+ Valid format string

---

## Return values:

`_printf` returns the total number of characters printed on success.
If an error occurs (for example, `format` is `NULL`), the function returns `-1`.

---

## Technical Testing Environment

- Distribution: [**Ubuntu _20.04_**](https://releases.ubuntu.com/20.04.6/?_gl=1*19ip6hm*_gcl_au*MTE4NTIyOTI0MS4xNzA3MTMxMDQx&_ga=2.149898549.2084151835.1707729318-1126754318.1683186906)
* Compiler & Version: [**GCC _v15.2_**](https://gcc.gnu.org/gcc-15/)
+ Compiler Command: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
- Style: Betty
* Text Editor & Version: [**VIM _v9.1.1825_**](https://www.vim.org/vim-9.1-released.php)
