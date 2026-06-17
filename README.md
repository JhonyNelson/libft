*This project has been created as part of the 42 curriculum by jhcosta-.*

## Description

libft is a C static library created as part of the 42 curriculum. The goal is to recode a set of standard C library functions (`libc`) as well as additional utility functions, producing a reusable library (`libft.a`) for future projects at 42.

The library covers character classification, memory manipulation, string operations, output functions using file descriptors, and linked list management. All implemented from scratch following the Norminette coding standard.

## Instructions

### Compilation

Run `make` at the root of the repository. This compiles all source files and creates `libft.a`.

### Makefile Rules

- `make` / `make all` — compiles all mandatory files and creates `libft.a`
- `make clean` — removes object files
- `make fclean` — removes object files and `libft.a`
- `make re` — runs `fclean` then `all`

### Using the Library

Include the header in your source file:

```c
#include "libft.h"
```

Compile your project linking the library:

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

## Library

### Part 1 – Libc Functions

Reimplementations of standard `libc` functions, prefixed with `ft_`, following the exact behavior described in each function's `man` page.

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Returns 1 if the character is alphabetic, 0 otherwise |
| `ft_isdigit` | Returns 1 if the character is a decimal digit, 0 otherwise |
| `ft_isalnum` | Returns 1 if the character is alphanumeric, 0 otherwise |
| `ft_isascii` | Returns 1 if the character is a valid ASCII character, 0 otherwise |
| `ft_isprint` | Returns 1 if the character is printable, 0 otherwise |
| `ft_strlen` | Returns the length of the string |
| `ft_memset` | Fills a memory area with a given value |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies `n` bytes from source to destination |
| `ft_memmove` | Copies `n` bytes safely, handling overlapping memory regions |
| `ft_strlcpy` | Copies a string into a destination buffer with size bound |
| `ft_strlcat` | Appends a string to a destination buffer with size bound |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates the first occurrence of a character in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string |
| `ft_strncmp` | Compares up to `n` characters of two strings |
| `ft_memchr` | Locates the first occurrence of a value in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring within a string, bounded by `n` characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Returns a newly allocated copy of a string |

### Part 2 – Additional Functions

Utility functions not present in `libc` or present in a different form.

| Function | Description |
|----------|-------------|
| `ft_substr` | Returns a substring from a string |
| `ft_strjoin` | Returns a new string as the concatenation of two strings |
| `ft_strtrim` | Returns a copy of a string with characters from a set trimmed from both ends |
| `ft_split` | Splits a string using a delimiter character; returns a NULL-terminated array |
| `ft_itoa` | Returns the string representation of an integer |
| `ft_strmapi` | Applies a function to each character of a string, returning a new string |
| `ft_striteri` | Applies a function to each character of a string in-place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 – Linked List

Functions to manage a singly linked list. Each node uses the following structure:

```c
typedef struct s_list
{
    void         *content;
    struct s_list *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node with the given content |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a node's content and the node itself |
| `ft_lstclear` | Deletes and frees all nodes of the list |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Applies a function to each node's content and returns a new list |

## Resources

- [Linux man-pages](https://man7.org/linux/man-pages/) — reference for all reimplemented libc functions
- [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) — foundational C reference
- [42 Norminette](https://github.com/42School/norminette) — official 42 coding style linter
- [GNU C Library (glibc) Manual](https://www.gnu.org/software/libc/manual/) — additional reference for standard functions
- [FreeBSD man pages](https://www.freebsd.org/cgi/man.cgi) — reference for BSD-specific functions (`strlcpy`, `strlcat`, `bzero`)

### AI Usage

AI was used as an auxiliary tool throughout this project to help develop reasoning, critical thinking, and organization.