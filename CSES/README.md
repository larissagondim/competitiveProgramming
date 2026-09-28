# CSES

This folder contains C++ solutions for problems from the [CSES Problem Set](https://cses.fi/problemset/).

There are **5 C++ source files**. Four contain implementations; `permutations.cpp` currently only reads `n` and produces no output. Submission verdicts are not tracked here.

## Solutions

| Problem | File | Topic | Implementation |
| --- | --- | --- | --- |
| [Weird Algorithm](https://cses.fi/problemset/task/1068) | [`weird-algorithm.cpp`](weird-algorithm.cpp) | Collatz sequence simulation | Implemented |
| [Missing Number](https://cses.fi/problemset/task/1083) | [`missing-number.cpp`](missing-number.cpp) | Arithmetic sum | Implemented |
| [Repetitions](https://cses.fi/problemset/task/1069) | [`repetitions.cpp`](repetitions.cpp) | Longest consecutive substring | Implemented |
| [Increasing Array](https://cses.fi/problemset/task/1094) | [`increasing-array.cpp`](increasing-array.cpp) | Greedy adjustments | Implemented |
| [Permutations](https://cses.fi/problemset/task/1070) | [`permutations.cpp`](permutations.cpp) | Permutation construction | In progress |

## How to run

Compile a solution with C++17 from the repository root:

```bash
g++ -std=c++17 -O2 -Wall CSES/missing-number.cpp -o solution
./solution < input.txt
```

Replace `missing-number.cpp` with the desired solution file. Each program reads from standard input and writes to standard output according to the problem statement.

Use GCC/G++ with C++17 support. Create `input.txt` with test input, or omit the redirection to enter input interactively.

[Repository overview](../README.md) · [Documentation tracker](../docs/README.md)
