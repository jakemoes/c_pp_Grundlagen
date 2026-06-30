# C++ Basics & Syntax Training

Welcome to my C++ learning repository. The goal of this project is to get a solid understanding of the C++ syntax, master core programming concepts, and build a strong foundation in the language.

The code examples and exercises in this repository are based on the [W3Schools C++ Tutorial](https://www.w3schools.com/cpp/default.asp).

---

## 🚀 Roadmap & LearningView

This repository is a collection of topic folders. [Main/Start.cpp](Main/Start.cpp#L1) is the entry point that runs the examples, but the real content lives in the individual folders below.

### Folder Overview

- [Main](Main/Start.cpp#L1): starts the program and links the examples together.
- [GetStarted](GetStarted/GetStarted.cpp#L1): the first basic examples and introduction.
- [Syntax](Syntax/Syntax.cpp#L1): language structure, statements, and first rules.
- [Variables](Variables/Variables.cpp#L1): variable creation, assignment, and constants.
- [DataTypes](DataTypes/DataTypes.cpp#L1): primitive types, `auto`, and type examples.
- [Output](Output/Output.cpp#L1): console output and formatting.
- [UserInput](UserInput/UserInput.cpp#L1): reading values from the console.
- [Operators](Operators/Operators.cpp#L1): arithmetic, comparison, logical, and assignment operators.
- [Math](Math/Math.cpp#L1): simple math-related examples.
- [Booleans](Booleans/Booleans.cpp#L1): boolean values and expressions.
- [IfElse](IfElse/IfElse.cpp#L1): conditional branching with if, else, and related patterns.
- [Switch](Switch/Switch.cpp#L1): switch-based branching.
- [WhileLoop](WhileLoop/WhileLoop.cpp#L1): while and do-while style looping.
- [ForLoop](ForLoop/ForLoop.cpp#L1): counted loops, nested loops, and foreach style iterations.
- [BreakAndContinue](BreakAndContinue/BreakAndContinue.cpp#L1): loop control with break and continue.
- [Arrays](Arrays/Arrays.cpp#L1): one-dimensional and multi-dimensional arrays.
- [Strings](Strings/Strings.cpp#L1): string handling and string operations.
- [Structures](Structures/Structures.cpp#L1): struct-based data grouping.
- [Enums](Enums/Enums.cpp#L1): enum values and named constants.
- [Pointers](Pointers/Pointers.cpp#L1): pointer basics and memory address handling.
- [Refences](Refences/Refernces.cpp#L1): references and aliasing behavior.
- [Utility](Utility/Console.h#L1): shared console helpers used across the examples.

### Most Important Topics

- [Main/Start.cpp](Main/Start.cpp#L1): the central runner for the examples.
- [Syntax/Syntax.cpp](Syntax/Syntax.cpp#L1): program structure and syntax basics.
- [Variables/Variables.cpp](Variables/Variables.cpp#L1) and [DataTypes/DataTypes.cpp](DataTypes/DataTypes.cpp#L1): values, types, and storage.
- [IfElse/IfElse.cpp](IfElse/IfElse.cpp#L1), [Switch/Switch.cpp](Switch/Switch.cpp#L1), and [BreakAndContinue/BreakAndContinue.cpp](BreakAndContinue/BreakAndContinue.cpp#L1): control flow.
- [WhileLoop/WhileLoop.cpp](WhileLoop/WhileLoop.cpp#L1) and [ForLoop/ForLoop.cpp](ForLoop/ForLoop.cpp#L1): looping patterns.
- [Arrays/Arrays.cpp](Arrays/Arrays.cpp#L1), [Strings/Strings.cpp](Strings/Strings.cpp#L1), [Structures/Structures.cpp](Structures/Structures.cpp#L1), and [Enums/Enums.cpp](Enums/Enums.cpp#L1): data modeling and grouping.
- [Pointers/Pointers.cpp](Pointers/Pointers.cpp#L1) and [Refences/Refernces.cpp](Refences/Refernces.cpp#L1): memory and aliasing.

### Learning Focus

- Use `Main` as the runner, not as the main source of learning.
- Learn the basics by doing the examples
- Build up toward control flow, collections, and memory concepts.


## 🛠️ Prerequisites & Setup

To compile and run the examples in this repository, you need a C++ compiler.

* **Compiler:** GCC, Clang / Apple Clang on macOS ARM, or MSVC
* **Build Tool:** CMake
* **IDE/Editor:** Visual Studio Code (with C/C++ extension) or CLion (recommended)
* **Standard:** C++17 (or newer)

### Compiling and Running via Terminal

```bash
# Run these commands from the project root
cmake -S . -B build
cmake --build build
./build/c_pp_Grundlagen
```

If you are in a different directory, change into the repository first using the path where you cloned it.

The program starts in [Main/Start.cpp](Main/Start.cpp#L1), which contains the `main()` function and calls the topic examples.

### 📝 Key Takeaways & Notes
(A place to jot down personal notes, conceptual breakthroughs, or 
language specific behavior)
* Memory Management: C++ does not have automatic garbage collection. 
Memory allocated manually must be managed carefully.
* Pointers vs. References: A pointer stores a memory address and can 
be null, while a reference is just an alias for an existing variable.

### 👤 Author
Jakob Mösenbacher - https://github.com/jakemoes