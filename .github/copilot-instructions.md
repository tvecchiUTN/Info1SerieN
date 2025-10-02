# GitHub Copilot Instructions

## Project Overview

This is a C programming exercises repository for a university course (Info1SerieN) containing 4 practice activities (Act1-Act4) that demonstrate progressive development of generic programming concepts in C.

## Architecture & Patterns

### Core Pattern: Generic Array Operations
- **Act1-3**: Evolution of a generic array printing system (`imprVec.h/c`)
- **Act4**: Generic binary search implementation (`bsrch.h/c`)

Each activity follows the same modular structure:
```
ActN/
├── main.c        # Demonstration/test code
├── [module].h    # Header with function declarations and documentation
└── [module].c    # Implementation with void* for generics
```

### Function Pointer Strategy
The codebase extensively uses function pointers for generic operations:
- `int (*prt)(const void *)` - printing functions for different data types
- `int (*cond)(const void *)` - conditional filtering (Act2)
- `double (*getValue)(const void *)` - value extraction (Act3)
- `int (*compar)(const void *, const void *)` - comparison functions (Act4)

### Progressive API Evolution
- **Act1**: Basic `print(base, nitems, size, prt)` - simple array printing
- **Act2**: Adds conditional printing with `print(base, nitems, size, prt, cond)`
- **Act3**: Adds value extraction with `print(base, nitems, size, prt, getValue)`
- **Act4**: Implements `my_bsearch()` following standard library conventions

## Key Conventions

### Header Guards
Always use `#ifndef __MODULENAME_H` pattern (uppercase module name with underscores).

### Documentation Style
Use Doxygen-style comments with `@brief`, `@param`, and `@return` tags. Example:
```c
/**
 * @brief Imprime cualquier tipo de array
 * @param base Puntero al primer elemento del array a imprimir.
 * @param nitems Cantidad de elementos del array (apuntado por base).
 * @param size Tamaño en bytes de cada elemento del array.
 * @param prt Función que imprime un elemento del array.
 */
```

### Type-Specific Helpers
Each module provides standard helper functions:
- `printInt()` - for integer arrays
- `printFloat()` - for float arrays  
- `printMat()` - for character matrices
- `printString()` - for string arrays
- `cmpInt()`, `cmpFloat()` - for comparisons (Act4)

### Void Pointer Casting Pattern
Consistent approach to void pointer manipulation:
```c
// For accessing array elements
char *puntero_base = (char*)base;
void *puntero_elemento = puntero_base + (i * size);

// For dereferencing specific types
printf("%d\n", *(int*)vec);
printf("%.2f\n", *(float*)vec);
```

## Build & Development

### Compilation
No Makefiles present - compile manually for each activity:
```bash
cd ActN
gcc -o program main.c [module].c
```

### Testing Pattern
Each `main.c` contains basic demonstration code. Act2 and Act3 have working examples, while Act1 and Act4 have empty main functions indicating incomplete exercises.

## Code Quality Notes

### Known Issues to Address
- **Act1**: `print()` function has incomplete implementation (missing argument in `prt()` call)
- **Act4**: `my_bsearch()` uses linear search instead of binary search algorithm
- **Act1, Act4**: Empty main functions need implementation

### Missing Dependencies
Act2 and Act3 reference undefined functions (`valorInt` in Act3) that need implementation.

When working on this codebase, focus on maintaining the generic programming patterns and function pointer conventions established in the working examples (Act2, Act3).