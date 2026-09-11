# DSA Lab 01 — Arrays, Basic OOP and Git

**Name:** Mazhar Mohyudin
**Registration Number:** 541874
**Class:** BSCS-15D / BSCS-15E
**Date:** 11 September 2026

## Programs

- **task1.cpp** — Declares an array of five values, changes the third element (index 2) to 7, and prints all five values with a `for` loop.
- **task2.cpp** — Reads five integers into an array with one loop, adds them into `total` with a second loop, and prints the running trace and the final total.
- **task3.cpp** — Defines a `Student` class with `rollNumber` and `marks` plus a `display()` member function, creates two objects, and shows that changing `s1.marks` leaves `s2.marks` untouched.
- **task4.cpp** — Reads eight integers and reports the largest and smallest values with the index of their first occurrence.
- **task5.cpp** — Reads six integers and reverses them in place using a two-marker swap, without a second array.
- **task6.cpp** — Reads ten integers and compacts the first occurrence of each distinct value into the front of the same array, printing the unique values and their count.

## Test results (Task 2)

| Test input | Expected total | Actual total |
| --- | --- | --- |
| 1 2 3 4 5 | 15 | 15 |
| 0 0 0 0 0 | 0 | 0 |
| -2 4 -1 0 3 | 4 | 4 |

### Trace for the first test

| i | numbers[i] | total after adding |
| --- | --- | --- |
| 0 | 1 | 1 |
| 1 | 2 | 3 |
| 2 | 3 | 6 |
| 3 | 4 | 10 |
| 4 | 5 | 15 |

## Test results (Task 3)

| Step | s1.rollNumber | s1.marks | s2.rollNumber | s2.marks |
| --- | --- | --- | --- | --- |
| After the initial assignments | 1 | 75 | 2 | 90 |
| After `s1.marks = 80;` | 1 | 80 | 2 | 90 |

`s2.marks` does not change. `s1` and `s2` are separate objects, and each one holds its own copy of the data members at its own memory location, so writing to `s1.marks` cannot affect `s2`.

## Other sample runs

| Program | Input | Output |
| --- | --- | --- |
| task1 | (none) | `2 4 7 8 10` |
| task4 | `3 9 1 9 4 1 7 2` | largest 9 at index 1, smallest 1 at index 2 |
| task5 | `3 7 2 9 4 1` | `1 4 9 2 7 3` |
| task6 | `4 2 4 7 2 9 7 1 9 1` | `4 2 7 9 1`, count 5 |

## Academic integrity

All programs were typed, compiled and tested by me. Concepts were revised from the lab manual and from Goodrich, Tamassia & Mount, *Data Structures and Algorithms in C++* (2nd ed.).
