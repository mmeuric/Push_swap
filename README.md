# push_swap

`push_swap` is an algorithmic sorting project from the 42 curriculum.
The goal: sort a stack of integers using only a **limited set of stack operations**, while outputting the *shortest possible* sequence of moves.

This project challenges algorithm design, complexity analysis, and writing efficient, optimized C code.

## 🎯 Project Objectives

* Implement stack-based sorting using constrained operations (swap, push, rotate…).
* Handle parsing, errors, duplicates, and edge cases safely.
* Create an optimized algorithm that minimizes the number of moves.
* Build a fast and reliable implementation with no crashes or memory leaks.
* Understand and compare algorithmic complexities (Radix sort, insertion strategies, chunking…).

## 🛠️ How It Works

* **Input:** a list of integers to sort.
* **Stacks:**

  * `a` → contains all values at start
  * `b` → empty
* **Goal:** sort stack `a` in ascending order using only the allowed instructions (`sa`, `pb`, `ra`, `rra`, etc.).
* The program outputs the operations needed to sort the list — nothing more.

Error handling is strict: invalid inputs, duplicates, and overflows print `"Error"`.

## 🚀 Bonus: Checker Program

I implemented the bonus **checker** program, which:

* Reads instructions from stdin
* Executes them on the given stacks
* Prints `OK` if the result is correctly sorted, else `KO`

Useful for validating the push_swap output.

## 📊 Performance

Algorithms adapt depending on input size:

* Small sets → tailored strategies
* Larger sets → optimized chunk-based logic
  My implementation respects all required benchmarks for full validation.

## 📚 What I Learned

Through this project, I strengthened my skills in:

* Algorithm design & complexity optimization
* Data structure manipulation (linked lists / stacks)
* Error handling and input validation
* Writing efficient C code under strict constraints
* Building and testing a complete workflow (push_swap + checker)
