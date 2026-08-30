# Programming Assignment 4 - Huffman coding (Parts I-III)

Complete Huffman encoder for CS319 Algorithm Analysis.
This folder holds the finished version of the assignment.
It was previously maintained as a separate `HuffmanEncoder` repository and was merged back here so that all three parts of PA4 live together with the assignment handout.

## What it does

`huffman.java` reads a text file, builds a character frequency table, constructs a Huffman tree, generates the code table, encodes the file, decodes it back, and reports a compression ratio.

Four characters are given special handling so the encoded stream stays printable and self-terminating:

| Character in file | Encoded as |
|---|---|
| space | `-` |
| newline | `!` |
| period | `.` |
| end of message | `+` |

## How it works

**Part I - frequency table.**
The file is read character by character into a `HashMap<Character, Integer>`.
Carriage returns are skipped so Windows line endings do not distort counts.
A single `+` is appended to mark end of message.

**Part II - tree and code table.**
Nodes go into a `PriorityQueue` ordered by frequency.
The two least frequent nodes are repeatedly combined into a parent until one root remains, so characters that occur more often finish closer to the root and receive shorter codes.
`generateCodes` then walks the tree recursively, appending `0` for a left branch and `1` for a right branch.
A single-character input is handled as an edge case by assigning the code `0` rather than an empty string.

**Part III - encode, decode, and compression stats.**
The file is read a second time and each character is replaced by its code.
This two-pass approach means the whole file never has to be held in memory, which matters for large inputs; a one-pass method is possible but costs more memory on average.
`decodeMessage` walks the tree bit by bit from the root, emitting a character at each leaf and stopping at `+`, then reverses the `-` and `!` substitutions.
Finally it reports original size, encoded size, and the ratio between them.

## How to run

```
javac huffman.java
java huffman
```

The input path is hardcoded near the top of `main`:

```java
String filePath = "test/filetoencode.txt";
```

Change that line to encode a different file.
Run from this directory so the relative `test/` path resolves.

## Known limitation

The encoder produces a **string of `'0'` and `'1'` characters**, not packed bits.
Nothing in this program writes compressed bytes to disk, so the reported compression ratio describes what Huffman coding would achieve rather than what this program actually writes.
`test/encodedfile.bin` is supplied with the assignment; it is not produced by this code.

Making this a real file compressor would need a bit buffer that packs eight codes into each byte, a header storing the frequency table so the tree can be rebuilt at decode time, and a decoder that reads from the packed file.
That is a rewrite rather than a patch, and it was out of scope for the assignment.

## Files

| File | Purpose |
|---|---|
| `huffman.java` | Complete implementation, all three parts |
| `test/filetoencode.txt` | Sample input |
| `test/freqfilespec.txt` | Expected frequency table format |
| `test/codespec.txt` | Expected code table format |
| `test/msgspec.txt` | Expected encoded message format |
| `test/encodedfile.bin` | Instructor-supplied reference file |
| `PA4.pdf` | Assignment handout (in Part I) |

## Provenance

The implementation is mine.
The assignment specification, the `test/` specification files, and `encodedfile.bin` were supplied with the course.
Parts I and II in the sibling folders are earlier drafts kept for history; this folder holds the version that supersedes them.
