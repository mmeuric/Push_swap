# push_swap

`push_swap` is an algorithmic sorting project from the 42 curriculum.
The goal: sort a stack of integers using only a **limited set of stack operations**, while outputting the *shortest possible* sequence of moves.

This project challenges algorithm design, complexity analysis, and writing efficient, optimized C code.

## 🎯 Project Objectives

* Implement stack-based sorting using constrained operations (swap, push, rotate…).
* Handle parsing, errors, duplicates, and edge cases safely.
* Create an optimized algorithm that minimizes the number of moves.
* Build a fast and reliable implementation with no crashes or memory leaks.
* Understand and compare algorithmic complexities (radix, chunking, insertion strategies…).

## 🛠️ How It Works

* **Input:** a list of integers to sort
* **Stacks:**

  * `a` → contains all values at start
  * `b` → empty
* **Goal:** output a sequence of operations that sorts stack `a`
* **Error handling:** invalid input, duplicates or overflow trigger `"Error"`

Only the allowed instructions (`sa`, `pb`, `ra`, `rra`, etc.) may be used.

## ▶️ How to Test

Run `push_swap` followed by a list of integers:

```bash
./push_swap "2 3 5 4 7 8"
```

The program will output a series of instructions, for example:

```
sa
pb
ra
...
```

To verify that the output actually sorts the numbers :

```bash
ARG="2 3 5 4 7 8"
./push_swap $ARG
```

Output will be:

```
OK
```

if everything is correct.

You can also count the number of moves:

```bash
ARG="4 67 3 87 23"
./push_swap $ARG | wc -l
```

## 📊 Performance

This project required achieving strong performance on the official benchmarks:

* **100 numbers** → < 700 operations
* **500 numbers** → < 5,500 operations

My implementation meets all required thresholds.

## 📚 What I Learned

This project strengthened my understanding of:

* Algorithm design & optimization
* Stack manipulation and data structures
* Efficient C programming
* Parsing & robust error handling
