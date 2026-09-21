# Codeforces

This folder contains solutions to [Codeforces](https://codeforces.com/) problems, organized by problem identifier.

Currently, this folder contains **10 problems** with **11 solutions**: 10 in C++ and 1 in Python. Solution files are named after the problem identifier (for example, `271A.cpp`).

## Solutions

| Problem | File(s) | Language | Topic |
| --- | --- | --- | --- |
| [1A — Theatre Square](https://codeforces.com/problemset/problem/1/A) | [`1A.cpp`](1A.cpp) | C++ | Arithmetic and ceiling division |
| [41A — Translation](https://codeforces.com/problemset/problem/41/A) | [`41A.cpp`](41A.cpp) | C++ | Reversed string comparison |
| [71A — Way Too Long Words](https://codeforces.com/problemset/problem/71/A) | [`71A.cpp`](71A.cpp) | C++ | String manipulation |
| [112A — Petya and Strings](https://codeforces.com/problemset/problem/112/A) | [`112A.cpp`](112A.cpp) | C++ | Case-insensitive lexicographical comparison |
| [131A — cAPS lOCK](https://codeforces.com/problemset/problem/131/A) | [`131A.cpp`](131A.cpp) | C++ | Uppercase and lowercase manipulation |
| [271A — Beautiful Year](https://codeforces.com/problemset/problem/271/A) | [`271A.cpp`](271A.cpp), [`271A.py`](271A.py) | C++ and Python | Distinct-digit verification |
| [282A — Bit++](https://codeforces.com/problemset/problem/282/A) | [`282A.cpp`](282A.cpp) | C++ | Operation simulation |
| [546A — Soldier and Bananas](https://codeforces.com/problemset/problem/546/A) | [`546A.cpp`](546A.cpp) | C++ | Summation and cost calculation |
| [677A — Vanya and Fence](https://codeforces.com/problemset/problem/677/A) | [`677A.cpp`](677A.cpp) | C++ | Width calculation based on height |
| [977A — Wrong Subtraction](https://codeforces.com/problemset/problem/977/A) | [`977A.cpp`](977A.cpp) | C++ | Subtraction simulation |

## Template

- [`template.cpp`](template.cpp): C++ starter template with type aliases, utility macros, fast I/O, and a debugging macro.

## How to run

The solutions have no external dependencies and do not require a specific build system.

Run the commands below from the `CodeForces` folder.

### C++

```bash
g++ -std=c++17 -O2 -Wall 1A.cpp -o 1A
./1A < input.txt
```

Replace `1A.cpp` with the desired source file.

The examples use GCC (`g++`), as the C++ sources include `bits/stdc++.h`.

### Python

```bash
python3 271A.py < input.txt
```

Each program reads from standard input and writes to standard output, according to the corresponding problem statement.
Create `input.txt` with the desired input before running these commands, or omit `< input.txt` to enter input directly in the terminal.
