# Hood College CS coursework

Assignments, in-class exercises, and course materials from three Hood College computer science courses.
This is a personal archive rather than a single project.

| Directory | Course |
|---|---|
| `CS202 – Computer Science II` | Object-oriented programming, data structures |
| `CS219 – Computer Science III` | Continued data structures and program design |
| `CS319 – Algorithm Analysis` | Algorithm design and complexity analysis |

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

- [mapRouter](https://github.com/danielcoblentz/mapRouter) - Dijkstra with A* heuristics, lazy resets, and a 4-ary heap
- [Spell-Checker](https://github.com/danielcoblentz/Spell-Checker) - binary search and ternary search trie lookup with Levenshtein suggestions

## Running the code

Most assignments are single Java files with a `main` method and no build system.
Compile and run them individually from their own directory:

```
javac Example.java
java Example
```

Several read input from a relative path defined near the top of `main`, so run them from the directory that contains their input files.
