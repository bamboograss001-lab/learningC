# C Programming Guide

# Grade 11

## 01. Structure of a C Program

- [ ] Minimal single-file layout
- [ ] **The `main()` Function**
  - [ ] Command-line arguments (`argc`, `argv`)
- [ ] **Build Process**
  - [ ] Preprocessor → Compiler → Assembler → Linker
  - [ ] One-shot build with `gcc`

---

## 02. C Preprocessor and Header Files

- [ ] **`#include` — System vs local headers**
- [ ] **`#define` — Object-like Macros**
- [ ] **`#define` — Function-like Macros**
- [ ] `#define` — Flag Macros (no substitution text)
- [ ] **Conditional Compilation**
  - [ ] `#ifdef`, `#ifndef`, `#if`, `#elif`, `#else`, `#endif`
  - [ ] Header guard pattern

---

## 03. Comments

- [ ] Single-line comment `//`
- [ ] Multi-line comment `/* ... */`

---

## 04. Initialization and Uninitialization

- [ ] **Copy Initialization**
- [ ] **Uninitialized Variables & Garbage Data**

---

## 05. Identifiers and Keywords

- [ ] Objects vs Variables
- [ ] **Keywords Reference**
  - [ ] Data types & type modifiers
  - [ ] Type qualifiers (`const`)
  - [ ] Storage class specifiers (`static`)
  - [ ] Control flow keywords
  - [ ] Structure & composite type keywords
- [ ] **Identifier Naming Rules**
  - [ ] No reserved keywords
  - [ ] Allowed characters only
  - [ ] Must start with letter or underscore
  - [ ] Case sensitive
- [ ] **Naming Conventions** (`snake_case`, `camelCase`, `UPPER_SNAKE_CASE`, `PascalCase`)

---

## 06. Basic Data Types

- [ ] **`sizeof` Operator**
- [ ] **Fundamental Data Type Sizes**
- [ ] **Floating-Point Numbers (`float`, `double`)**
- [ ] Type Meanings Overview

---

## 07. Variables and Constants

- [ ] **Standard Integer Types**
- [ ] **Boolean (`_Bool` / `bool`)**
- [ ] **Character Types (`char`) & ASCII**
- [ ] **Type Conversion (C-Style Cast)**
- [ ] Type Promotion Hierarchy
- [ ] **Constants**
  - [ ] `const` variables
  - [ ] `#define` macros

---

## 08. Specifiers and Escape Sequences

- [ ] **Format Specifiers** (`%d`, `%f`, `%s`, `%c`, `%p`, etc.)
- [ ] **Escape Sequences** (`\n`, `\t`, `\\`, `\"`, etc.)

---

## 09. Simple and Compound Statements

- [ ] Simple Statements
- [ ] **Compound Statements (Blocks)**
- [ ] Null Statement

---

## 10. Operators

- [ ] **All Operator Categories Overview**
- [ ] **Operator Precedence Table**
- [ ] **Arithmetic Operators**
- [ ] **Arithmetic Assignment Operators**
- [ ] **Increment and Decrement Operators** (prefix vs postfix)
- [ ] **Relational Operators**
- [ ] **Logical Operators & Short-Circuit Evaluation**
- [ ] De Morgan's Laws
- [ ] **Ternary (Conditional) Operator**
- [ ] Comma Operator

---

## 11. Expressions

- [ ] What is an expression
- [ ] Evaluation & compound expressions

---

## 12. Input / Output (I/O) Functions

- [ ] **`stdio.h` & Standard Streams (`stdin`, `stdout`, `stderr`)**
- [ ] **`printf()` — Output**
- [ ] **`scanf()` — Input**
- [ ] `printf` vs `scanf` — Quick Comparison
- [ ] `fprintf()` & `stderr`

---

## 13. Control Statements

- [ ] **`if` Statement**
- [ ] **`if-else` & `else if`**
  - [ ] Braced vs unbraced conditional pairing
  - [ ] `if-else` vs `if-if`
- [ ] **`switch` Statement**
- [ ] `goto` Statement
- [ ] **Loops**
  - [ ] `while` loop
  - [ ] `do-while` loop
  - [ ] `for` loop
  - [ ] Loop control: `break`, `continue`, `return`

---

## 14. Arrays

- [ ] **Declaration & Initialization**
  - [ ] At declaration, partial, without size, zero-initialize
- [ ] **Accessing & Modifying Elements**
- [ ] **Traversing an Array**
- [ ] **Arrays and Pointers**
- [ ] **Passing Arrays to Functions**
- [ ] **Multidimensional Arrays**
  - [ ] 2D arrays (matrix) — init, access, traversal
  - [ ] 3D arrays
  - [ ] Passing 2D arrays to functions
- [ ] **Character Arrays (Strings)**
- [ ] Array of Strings

---

## 15. Strings

- [ ] **Null Termination (`\0`)**
- [ ] **String Input — `scanf` vs `fgets`**
- [ ] **String Output — `printf`**
- [ ] **`strlen()` — String Length**
- [ ] **`strcat()` — String Concatenation**
- [ ] **`strncpy()` — Safe String Copy**
- [ ] **`strcmp()` — String Comparison**
- [ ] `strrev()` — Reversing a String (Windows / cross-platform)
- [ ] **String Pointers** (`char*`, `const char*`, `char* const`, `const char* const`)

---

*C Programming Guide Grade 11 — © 2026 bamboo grass*

# Grade 12

## 01. Functions

- [ ] What is a function & `main()`
- [ ] **Initialization — definition vs declaration**
- [ ] **Parameter vs Argument**
- [ ] **Types of Functions**
  - [ ] Void functions (non-returning)
  - [ ] Value-returning functions
- [ ] **Pass by Value**
- [ ] **Pass by Pointer (simulated pass-by-reference)**
- [ ] **Forward Declarations and Definitions**
- [ ] Local Scope
- [ ] Functions Calling Other Functions

---

## 02. Structures, Unions, and Enums

- [ ] Program-Defined Types & Memory Layout
- [ ] **The `typedef` Keyword (Creating Type Aliases)**
  - [ ] Basic syntax
  - [ ] `typedef` with structs
  - [ ] `typedef` with pointers
  - [ ] `typedef` with function pointers
  - [ ] `typedef` with arrays
  - [ ] `typedef` for portability (`<stdint.h>`)
  - [ ] Common mistakes
- [ ] **Enumerations (`enum`)**
  - [ ] Enumerator Values
  - [ ] Printing Enums
- [ ] **Structs (`struct`)**
  - [ ] Struct Initialization & Multiple Variables
  - [ ] Using `typedef struct` for Cleaner Syntax
  - [ ] Member Access via dot (`.`) and arrow (`->`) Operators
  - [ ] Passing Structs to Functions
  - [ ] Structs Containing Structs (Nesting)
- [ ] **Unions (`union`)**
  - [ ] Declaration Syntax & Basic Usage
  - [ ] The Golden Rule (one valid member at a time)
  - [ ] Tagged Union Pattern
  - [ ] Anonymous Union (C11)
  - [ ] `struct` vs `union` vs `enum` — Quick Reference
  - [ ] Common Real-World Uses
  - [ ] Initialization Rules

---

## 03. Pointers

- [ ] What is a Pointer & Declaration Syntax
- [ ] **Initializing a Pointer**
- [ ] **The Address-of Operator `&`**
- [ ] **The Dereference Operator `*`**
- [ ] **Pointer Types Must Match**
- [ ] **Null Pointers**
- [ ] Changing What a Pointer Points To
- [ ] **Pass by Pointer (C's "Pass by Reference")**
- [ ] **Const Pointers**
  - [ ] Pointer to const
  - [ ] Const pointer
  - [ ] Const pointer to const
- [ ] **Pointer Arithmetic**
- [ ] **Function Pointers**
- [ ] `int* a` vs `int *a` — The Multi-Variable Trap
- [ ] Pointer to Union

---

## 04. Working with Files

- [ ] `FILE *` pointer
- [ ] **File Modes (`r`, `w`, `a`, `r+`, `w+`, `a+`)**
- [ ] **`fopen` / `fclose`**
- [ ] **Character I/O — `getc` / `putc`**
- [ ] **Integer I/O — `getw` / `putw`**
- [ ] **Formatted I/O — `fprintf` / `fscanf`**
- [ ] **Block I/O — `fread` / `fwrite`**
- [ ] **Line I/O — `fgets` / `fputs`**
- [ ] File Restructuring — `rename` / `remove`
- [ ] Standard Screen & Keyboard I/O vs File I/O Syntax
- [ ] Common Pitfalls

---

*C Programming Guide Grade 12 — © 2026 bamboo grass*