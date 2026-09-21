# CSES

This folder contains C++ solutions for problems from the [CSES Problem Set](https://cses.fi/problemset/).

## Solutions

| Problem | File | Topic |
| --- | --- | --- |
| [Weird Algorithm](https://cses.fi/problemset/task/1068) | [`weird-algorithm.cpp`](weird-algorithm.cpp) | Collatz sequence simulation |
| [Missing Number](https://cses.fi/problemset/task/1083) | [`missing-number.cpp`](missing-number.cpp) | Arithmetic sum |
| [Repetitions](https://cses.fi/problemset/task/1069) | [`repetitions.cpp`](repetitions.cpp) | Longest consecutive substring |
| [Increasing Array](https://cses.fi/problemset/task/1094) | [`increasing-array.cpp`](increasing-array.cpp) | Greedy adjustments |
| [Permutations](https://cses.fi/problemset/task/1070) | [`permutations.cpp`](permutations.cpp) | Permutation construction |

## How to run

Compile a solution with C++17 from the repository root:

```bash
g++ -std=c++17 -O2 -Wall CSES/missing-number.cpp -o solution
./solution < input.txt
```

Replace `missing-number.cpp` with the desired solution file. Each program reads from standard input and writes to standard output according to the problem statement.
