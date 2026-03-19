<div align="center">

```
╔═══════════════════════════════════════════════════════════════╗
║                                                               ║
║   ██████╗██████╗ ██████╗     ███╗   ███╗ ██████╗ ██████╗     ║
║  ██╔════╝██╔══██╗██╔══██╗    ████╗ ████║██╔═══██╗██╔══██╗    ║
║  ██║     ██████╔╝██████╔╝    ██╔████╔██║██║   ██║██║  ██║    ║
║  ██║     ██╔═══╝ ██╔═══╝     ██║╚██╔╝██║██║   ██║██║  ██║    ║
║  ╚██████╗██║     ██║         ██║ ╚═╝ ██║╚██████╔╝██████╔╝    ║
║   ╚═════╝╚═╝     ╚═╝         ╚═╝     ╚═╝ ╚═════╝ ╚═════╝    ║
║                                                               ║
║              ██████╗ ██╗  ██╗                                 ║
║             ██╔═══██╗██║  ██║                                 ║
║             ██║   ██║███████║                                 ║
║             ██║   ██║╚════██║                                 ║
║             ╚██████╔╝     ██║                                 ║
║              ╚═════╝      ╚═╝                                 ║
║                                                               ║
║       A pointer to the base can reveal                        ║
║       what the derived chose to conceal.                      ║
║                                                               ║
╚═══════════════════════════════════════════════════════════════╝
```

![C++98](https://img.shields.io/badge/C%2B%2B-98-00599C?style=flat-square&logo=c%2B%2B)
![42](https://img.shields.io/badge/42-Bangkok-white?style=flat-square&logo=42)
![Module](https://img.shields.io/badge/Module-04-red?style=flat-square)

</div>

---

## About

**Module 04** dives into subtype polymorphism — virtual functions, abstract classes, and interfaces. You learn how a base pointer can call derived behavior, why deep copies matter when objects own heap memory, and how to design truly abstract types.

---

## Exercises

| # | Exercise | Description |
|---|----------|-------------|
| 00 | **Polymorphism** | Animal, Dog, Cat — virtual `makeSound()` |
| 01 | **I don't want to set the world on fire** | Deep copy with Brain — heap-allocated member |
| 02 | **Abstract class** | AAnimal — pure virtual functions, no instantiation |
| 03 | **Interface & recap** | AMateria, IMateriaSource — full interface pattern |

---

## Key Concepts

```
├── Virtual functions         — runtime dispatch via vtable
├── Pure virtual (= 0)       — abstract classes
├── Interfaces                — classes with only pure virtuals
├── Deep copy                 — cloning heap-owned members
├── Base pointer behavior     — polymorphic calls
├── Virtual destructors       — correct cleanup in hierarchies
└── Object slicing            — what happens without pointers
```

---

## Build

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

---

<div align="center">

*Part of the 42 C++ Module Series — 42 Bangkok*

</div>
