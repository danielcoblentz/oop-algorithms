# Hood College CS coursework

Assignments, in-class exercises, and course materials from three Hood College computer science courses.
This is a personal archive rather than a single project.

| Directory | Course |
|---|---|
| `CS202 – Computer Science II` | Java, object-oriented programming and data structures (Spring 2025) |
| `CS219 – Advanced Data Structures` | C++, templates and the standard library (Fall 2024) |
| `CS319 – Algorithm Analysis` | Java, algorithm design and complexity analysis (Spring 2025) |

## What is mine and what is not

The assignment solutions, in-class exercises, and written course outlines are my own work.

Everything else in these directories was supplied by the course: assignment handouts, lecture slides, publisher decks, starter code, and reference PDFs.
Those files are the property of their respective authors and publishers and are kept here only as a personal record of the courses.

## Notable work

The most complete piece here is the Huffman coding assignment:

- `CS319 – Algorithm Analysis/assignments/Programming Assignment 4 Part III/`

It builds a frequency table, constructs a Huffman tree with a priority queue, generates the code table, encodes and decodes a file, and reports a compression ratio.
Parts I and II in the sibling directories are earlier drafts of the same assignment, kept for history.
This work previously lived in a separate `HuffmanEncoder` repository and was merged here so the whole assignment sits in one place.

Two other algorithm assignments from these courses were developed further and live in their own repositories:

- [map-router](https://github.com/danielcoblentz/map-router) - Dijkstra with A* heuristics, lazy resets, and a 4-ary heap
- [spell-checker](https://github.com/danielcoblentz/spell-checker) - binary search and ternary search trie lookup with Levenshtein suggestions

## Running the code

The CS202 and CS319 assignments are single Java files with a `main` method and no build system.
Compile and run them individually from their own directory:

```
javac Example.java
java Example
```

Several read input from a relative path defined near the top of `main`, so run them from the directory that contains their input files.

CS219 is a C++ course, so everything under it is a standalone `.cpp` file compiled the same way with `g++`.
