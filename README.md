# Libft

Libft is a custom implementation of a subset of the C standard library, written as part of the 42 / Codam curriculum. It provides a reusable, norm-compliant static library (`libft.a`) that I use as a foundation for later C projects.  
This implementation includes both the **full mandatory part and the bonus linked-list API**.

---

## 📚 Overview

The goal of this project is to rebuild commonly used C standard library functions from scratch and extend them with additional utilities and data structures.

All code:

- follows the 42 Norm,
- is written in C,
- is compiled with `-Wall -Wextra -Werror`.

Libft is organized into three main groups:

- **Libc-like functions** — drop-in replacements for standard C functions  
- **Additional utilities** — higher-level helpers for strings, memory and I/O  
- **Bonus part** — a generic singly linked-list implementation

---

## 🛠 Features

### 1. Libc-like functions

Reimplementations of common `<ctype.h>`, `<string.h>` and `<stdlib.h>` routines.

**Character checks & conversions**

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

**String handling**

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`

**Memory manipulation**

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

**Conversion & allocation**

- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

These functions mirror the behavior and prototypes of their standard counterparts, but with the `ft_` prefix.

---

### 2. Additional utility functions

Higher-level helpers that build on top of the basic functions:

**String creation & transformation**

- `ft_substr` – create a substring  
- `ft_strjoin` – concatenate two strings  
- `ft_strtrim` – trim a set of characters from both ends  
- `ft_split` – split a string by a delimiter into an array of strings  
- `ft_itoa` – convert an integer to a string  
- `ft_strmapi` – map a function over a string into a new one  
- `ft_striteri` – apply a function in-place to each character

**File descriptor output helpers**

- `ft_putchar_fd` – write a character to a file descriptor  
- `ft_putstr_fd` – write a string  
- `ft_putendl_fd` – write a string followed by a newline  
- `ft_putnbr_fd` – write an integer in decimal form

These utilities make working with strings and I/O more convenient in later projects.

---

### 3. ⭐ Bonus: Linked list API

The bonus part extends the library with a generic singly linked list based on:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Implemented list operations:

- `ft_lstnew` – create a new node  
- `ft_lstadd_front` – add a node at the beginning of the list  
- `ft_lstadd_back` – add a node at the end of the list  
- `ft_lstsize` – count nodes in a list  
- `ft_lstlast` – get the last node  
- `ft_lstdelone` – delete a single node with a custom `del` function  
- `ft_lstclear` – delete and free an entire list  
- `ft_lstiter` – apply a function to each node’s content  
- `ft_lstmap` – create a new list by mapping a function over another list

This part demonstrates manual memory management, generic data handling via `void *`, and safe resource cleanup.

---

## 🧩 Building the library

```bash
# Build the mandatory part
make

# Build mandatory + bonus part (linked list)
make bonus

# Clean object files
make clean

# Remove objects and the compiled library
make fclean

# Rebuild from scratch
make re
```

After running `make` or `make bonus`, the static library `libft.a` is created at the root of the repository.

---

## ▶️ Using Libft in another project

1. Add this repository to your project (or copy the sources).
2. Build the library:

   ```bash
   make          # or: make bonus
   ```

3. Link it when compiling your program:

   ```bash
   cc main.c -L. -lft -I. -o my_program
   ```

4. Include the header in your source files:

   ```c
   #include "libft.h"
   ```

**Example:**

```c
#include "libft.h"
#include <unistd.h>

int main(void)
{
    char *msg = ft_strdup("Hello from libft!");
    if (!msg)
        return (1);
    ft_putendl_fd(msg, 1);
    free(msg);
    return (0);
}
```

---

## 🎯 What this project demonstrates

- Solid understanding of **low-level C**, pointers and manual memory management  
- Ability to **reimplement parts of the C standard library**  
- Creation and maintenance of a **reusable static library**  
- Implementation of a **generic linked list** with proper cleanup and error handling  
- Writing **clean, consistent, norm-compliant** C code suitable for use in larger projects
