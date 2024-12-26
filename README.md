# 📚 Libft

**Libft** is a custom implementation of the standard C library functions, created as part of the 42 School curriculum. This project serves as a foundation for understanding the internals of common library functions and provides a reusable codebase for future projects.

---

## 🛠️ Features

The library includes a comprehensive set of functions divided into several categories:

### **Libc Functions**
Reimplementations of functions from the standard C library:
- **Memory Functions**:  
  `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- **String Manipulation**:  
  `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`.
- **Character Checks and Conversions**:  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.

### **Additional Functions**
Functions that are commonly needed but not part of the standard library:
- **String Operations**:  
  `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
- **Utility Functions**:  
  `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### **Bonus Functions**
Functions designed for manipulating linked lists:
- `ft_lstnew`  
  Creates a new linked list element.
- `ft_lstadd_front`  
  Adds a new element at the beginning of the list.
- `ft_lstsize`  
  Returns the size of the linked list.
- `ft_lstlast`  
  Returns the last element of the list.
- `ft_lstadd_back`  
  Adds a new element at the end of the list.
- `ft_lstdelone`  
  Deletes a single element of the list.
- `ft_lstclear`  
  Deletes and frees all elements of the list.
- `ft_lstiter`  
  Iterates through the list and applies a function to each element.
- `ft_lstmap`  
  Creates a new list by applying a function to each element of an existing list.

---

## 🎯 Objectives

- Recreate essential functions from the C standard library.
- Build additional utility functions to extend functionality.
- Implement linked list operations to understand dynamic memory and data structures.
- Develop a reusable library for future projects.

---
