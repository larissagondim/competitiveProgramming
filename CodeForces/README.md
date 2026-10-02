# Codeforces

This folder contains solutions to [Codeforces](https://codeforces.com/) problems, organized by problem identifier.

This folder contains **43 source files** for **41 distinct file identifiers**: **41 C++** and **2 Python** files. The shared template lives at the repository root and is excluded from these counts.

Files are grouped by problem letter: `A/` (35 files), `B/` (5 files), and `C/` (3 files).
Two identifiers, `271A` and `339B`, have both C++ and Python implementations.
`A/2266.cpp` does not include a problem letter in its filename; its exact problem identifier still needs confirmation.

`B/492B.cpp` is in progress: it reads and sorts the lantern positions but produces no output.

## Solutions

The table inventories the files in the repository; it does not record submission verdicts.
A dash indicates that the topic has not yet been documented.

| Problem | File(s) | Language | Topic |
| --- | --- | --- | --- |
| [1A — Theatre Square](https://codeforces.com/problemset/problem/1/A) | [`A/1A.cpp`](A/1A.cpp) | C++ | Arithmetic and ceiling division |
| 4C | [`C/4C.cpp`](C/4C.cpp) | C++ | — |
| [41A — Translation](https://codeforces.com/problemset/problem/41/A) | [`A/41A.cpp`](A/41A.cpp) | C++ | Reversed string comparison |
| 69A | [`A/69A.cpp`](A/69A.cpp) | C++ | Sum vector coordinates |
| [71A — Way Too Long Words](https://codeforces.com/problemset/problem/71/A) | [`A/71A.cpp`](A/71A.cpp) | C++ | String manipulation |
| 96A | [`A/96A.cpp`](A/96A.cpp) | C++ | Count consecutive equal characters |
| [112A — Petya and Strings](https://codeforces.com/problemset/problem/112/A) | [`A/112A.cpp`](A/112A.cpp) | C++ | Case-insensitive lexicographical comparison |
| 116A | [`A/116A.cpp`](A/116A.cpp) | C++ | — |
| 118A | [`A/118A.cpp`](A/118A.cpp) | C++ | — |
| 122A | [`A/122A.cpp`](A/122A.cpp) | C++ | — |
| [131A — cAPS lOCK](https://codeforces.com/problemset/problem/131/A) | [`A/131A.cpp`](A/131A.cpp) | C++ | Uppercase and lowercase manipulation |
| 236A | [`A/236A.cpp`](A/236A.cpp) | C++ | — |
| 263A | [`A/263A.cpp`](A/263A.cpp) | C++ | — |
| 266A | [`A/266A.cpp`](A/266A.cpp) | C++ | Count adjacent equal characters |
| [271A — Beautiful Year](https://codeforces.com/problemset/problem/271/A) | [`A/271A.cpp`](A/271A.cpp), [`A/271A.py`](A/271A.py) | C++ and Python | Distinct-digit verification |
| [282A — Bit++](https://codeforces.com/problemset/problem/282/A) | [`A/282A.cpp`](A/282A.cpp) | C++ | Operation simulation |
| 339A | [`A/339A.cpp`](A/339A.cpp) | C++ | — |
| 339B | [`B/339B.cpp`](B/339B.cpp), [`B/339B.py`](B/339B.py) | C++ and Python | — |
| 467A | [`A/467A.cpp`](A/467A.cpp) | C++ | — |
| 492B | [`B/492B.cpp`](B/492B.cpp) | C++ | In progress: reads and sorts positions; no output |
| [546A — Soldier and Bananas](https://codeforces.com/problemset/problem/546/A) | [`A/546A.cpp`](A/546A.cpp) | C++ | Summation and cost calculation |
| [677A — Vanya and Fence](https://codeforces.com/problemset/problem/677/A) | [`A/677A.cpp`](A/677A.cpp) | C++ | Width calculation based on height |
| 703A | [`A/703A.cpp`](A/703A.cpp) | C++ | — |
| 707A | [`A/707A.cpp`](A/707A.cpp) | C++ | — |
| 734A | [`A/734A.cpp`](A/734A.cpp) | C++ | — |
| 903C | [`C/903C.cpp`](C/903C.cpp) | C++ | Sort values and find the maximum frequency |
| [977A — Wrong Subtraction](https://codeforces.com/problemset/problem/977/A) | [`A/977A.cpp`](A/977A.cpp) | C++ | Subtraction simulation |
| 977B | [`B/977B.cpp`](B/977B.cpp) | C++ | Count two-character substring frequencies |
| 1030A | [`A/1030A.cpp`](A/1030A.cpp) | C++ | — |
| 1374B | [`B/1374B.cpp`](B/1374B.cpp) | C++ | — |
| 1374C | [`C/1374C.cpp`](C/1374C.cpp) | C++ | — |
| 1475A | [`A/1475A.cpp`](A/1475A.cpp) | C++ | — |
| 1742A | [`A/1742A.cpp`](A/1742A.cpp) | C++ | — |
| 1791A | [`A/1791A.cpp`](A/1791A.cpp) | C++ | — |
| 1807A | [`A/1807A.cpp`](A/1807A.cpp) | C++ | — |
| 1850A | [`A/1850A.cpp`](A/1850A.cpp) | C++ | — |
| 1926A | [`A/1926A.cpp`](A/1926A.cpp) | C++ | — |
| 1971A | [`A/1971A.cpp`](A/1971A.cpp) | C++ | — |
| 2253A | [`A/2253A.cpp`](A/2253A.cpp) | C++ | — |
| 2266 (filename has no problem letter) | [`A/2266.cpp`](A/2266.cpp) | C++ | — |
| 2267A | [`A/2267A.cpp`](A/2267A.cpp) | C++ | Compare mirrored character pairs |

## Template

- [`../template.cpp`](../template.cpp): C++ starter template with type aliases, utility macros, fast I/O, and a debugging macro.

## How to run

The solutions have no external dependencies and do not require a specific build system.

Run the commands below from the `CodeForces` folder.

### C++

```bash
g++ -std=c++17 -O2 -Wall A/1A.cpp -o 1A
./1A < input.txt
```

Replace `A/1A.cpp` with the desired source file.

The examples use GCC (`g++`), as the C++ sources include `bits/stdc++.h`.

### Python

```bash
python3 A/271A.py < input.txt
```

Each program reads from standard input and writes to standard output, according to the corresponding problem statement.
Create `input.txt` with the desired input before running these commands, or omit `< input.txt` to enter input directly in the terminal.

[Repository overview](../README.md)
