# 📘 Learning C

> A structured, hands-on journey through the C programming language — from compiler mechanics to pointers and file I/O.

[![C Language](https://img.shields.io/badge/Language-C-blue?logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Repo](https://img.shields.io/badge/GitHub-bamboograss001--lab%2FlearningC-black?logo=github)](https://github.com/bamboograss001-lab/learningC)
[![License](https://img.shields.io/badge/License-MIT-green)](LICENSE)

---

## 🚀 About

This repository documents my personal exploration of C — a language that sits close to the metal and teaches you *exactly* what your computer is doing. The focus is on building deep, practical understanding rather than copying boilerplate.

**Key areas of focus:**
- How the compiler interprets and transforms source code
- Managing `stdin`, `stdout`, and `stderr` streams
- Avoiding classic pitfalls like the `scanf` buffer trap and `gets()` overflow
- Writing clean, maintainable, header-efficient C
- Memory management: pointers, arrays, and dynamic allocation

This repo is also the companion codebase for my tutorials on C, Python, and MERN stack development.

---

## 📂 What's Covered

| # | Topic |
|---|---|
| 1 | Program Structure & `main()` |
| 2 | The Build Process (Preprocessor → Compiler → Assembler → Linker) |
| 3 | Preprocessor Directives (`#include`, `#define`, Header Guards) |
| 4 | Objects, Variables & I/O (`printf`, `scanf`, `fgets`) |
| 5 | Data Types & Format Specifiers |
| 6 | Operators & Control Flow |
| 7 | Functions, Recursion & Scope |
| 8 | Arrays & Strings |
| 9 | Structs, Unions & Enums |
| 10 | Pointers (arithmetic, const, function pointers) |
| 11 | Dynamic Memory (`malloc`, `calloc`, `realloc`, `free`) |
| 12 | File I/O (`fopen`, `fread`, `fwrite`, modes) |
| 13 | Compiler Optimization & Debugging with GDB |
| 14 | Big O Notation Basics |

---

## 🛠️ Getting Started

### Prerequisites

- GCC (or any C99/C11-compatible compiler)
- A terminal / VS Code with the C/C++ extension

### Build a single file

```bash
gcc yourfile.c -o output
./output
```

### Debug build (with GDB symbols)

```bash
gcc -ggdb -O0 yourfile.c -o output
```

### Check your C standard

```bash
gcc -dM -E - < /dev/null | grep __STDC_VERSION__
```

---

## 💡 Quick Reference

### The Build Pipeline

```
Source (.c)  →  Preprocessed (.i)  →  Assembly (.s)  →  Object (.o)  →  Executable
               gcc -E                 gcc -S            gcc -c           gcc (link)
```

### Common Pitfalls

```c
// ❌ WRONG — buffer overflow, security hole
gets(buffer);

// ✅ CORRECT — bounded, safe
fgets(buffer, sizeof(buffer), stdin);

// ❌ WRONG — & missing causes undefined behaviour
scanf("%d", age);

// ✅ CORRECT
scanf("%d", &age);

// ⚠️ TRAP — only `a` is a pointer; `b` is a plain int
int* a, b;

// ✅ CORRECT — both are pointers
int *a, *b;
```

---

## 📁 Repository Structure

```
learningC/
├── codeContainer/      # Runnable .c example files
├── mdContainer/        # Supplementary markdown references
│   └── formatAndEscapeSequence.md
└── README.md
```

---

## 📬 Contact

| Purpose | Channel |
|---|---|
| Support & project inquiries | [support@khushankhadka.com.np](mailto:support@khushankhadka.com.np) |
| General / official | [bamboograss001@gmail.com](mailto:bamboograss001@gmail.com) |
| Casual chats & networking | [casual@khushankhadka.com.np](mailto:casual@khushankhadka.com.np) |
| Website | [khushankhadka.com.np](https://www.khushankhadka.com.np) |

---

## 🌐 Community

Join the learning community — ask questions, share progress, collaborate:

- 💬 **WhatsApp Group** — [Join here](https://chat.whatsapp.com/EZtN4J8byGmGm0iXfLOc2U)
- 👥 **Facebook Group** — [Join here](https://www.facebook.com/groups/988923610792264)

---

## 📺 YouTube Channel
 
This repo pairs with my YouTube channel where I break down C, Python, and full-stack web development in plain language — no theoretical fluff, just practical walkthroughs.
 
▶️ **[Watch on YouTube → @Bamboograss-001](https://www.youtube.com/@Bamboograss-001)**

---

## 📄 License

This project is open-source under the [MIT License](LICENSE). Feel free to use, modify, and share — just give credit where it's due.

---

*Built with curiosity. Documented with care.*
