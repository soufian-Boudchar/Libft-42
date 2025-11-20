# 📚 Libft - Your First C Library

![42 School](https://img.shields.io/badge/School-42-black?style=for-the-badge&logo=42)
![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Score](https://img.shields.io/badge/Score-100%2F100-success?style=for-the-badge)
![Norminette](https://img.shields.io/badge/Norminette-Passing-green?style=for-the-badge)

## 🗣️ About The Project

**Libft** is the first project of the 42 Common Core curriculum.  
The objective is to create your own C library (`libft.a`) containing essential functions you will use in later projects.

Since most built-in C functions are forbidden at 42, Libft becomes your toolbox:  
string manipulation, memory handling, and utility functions—all built by **you**.

---

## 🛠️ Functionality

### 🔹 Part 1 — Libc Functions  
Re-implementations of standard C library functions.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0–9). |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks if the character is ASCII. |
| `ft_isprint` | Checks for printable characters. |
| `ft_strlen` | Returns length of a string. |
| `ft_memset` | Fills memory with a byte value. |
| `ft_bzero` | Sets bytes to zero. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies memory (handles overlapping). |
| `ft_strlcpy` | Copies string with size limit. |
| `ft_strlcat` | Concatenates string with size limit. |
| `ft_toupper` | Converts to uppercase. |
| `ft_tolower` | Converts to lowercase. |
| `ft_strchr` | Finds first occurrence of a character. |
| `ft_strrchr` | Finds last occurrence of a character. |
| `ft_strncmp` | Compares strings. |
| `ft_memchr` | Searches memory for a byte. |
| `ft_memcmp` | Compares memory areas. |
| `ft_strnstr` | Locates substring. |
| `ft_atoi` | Converts string to int. |
| `ft_calloc` | Allocates zero-initialized memory. |
| `ft_strdup` | Duplicates a string. |

### 🔹 Part 2 — Additional Functions  
Useful functions not in the standard C library.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Returns substring of `s`. |
| `ft_strjoin` | Concatenates two strings. |
| `ft_strtrim` | Trims characters from start/end. |
| `ft_split` | Splits a string using delimiter. |
| `ft_itoa` | Converts integer to string. |
| `ft_strmapi` | Applies function to each char, returns new string. |
| `ft_striteri` | Applies function to each char in place. |
| `ft_putchar_fd` | Writes a char to fd. |
| `ft_putstr_fd` | Writes string to fd. |
| `ft_putendl_fd` | Writes string + newline to fd. |
| `ft_putnbr_fd` | Writes number to fd. |

---

## 🚀 Usage

Compile the mandatory part:

```bash
make
```

Clean object files:

```bash
make clean
```

Delete everything including the library:

```bash
make fclean
```

Re-compile from scratch:

```bash
make re
```

### Using Libft in your project

```bash
gcc main.c libft.a -o my_program
```

Include the header:

```c
#include "libft.h"
```

---

## 🧠 Skills Developed

- **Memory Management:** `malloc`, `free`, data safety.
- **Pointer Logic:** Working with addresses & buffers.
- **String Manipulation:** Low-level char and byte operations.
- **Makefile Mastery:** Custom rules, dependencies, and automation.

---

> ⚠️ *This project is part of the 42 curriculum. Respect academic integrity.*

