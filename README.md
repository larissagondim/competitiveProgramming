# Competitive Programming Solutions

This repository contains my solutions to competitive programming problems from [Beecrowd](https://www.beecrowd.com.br/) and [Codeforces](https://codeforces.com/). It serves as a record of my progress in problem-solving, algorithms, data structures, and the C, C++, and Python languages.

Some of the Beecrowd submissions are legacy solutions from my early stages of learning C. The repository is now expanding to include Codeforces problems as well.

## Current progress

The repository currently contains **178 solution files**:

| Platform | Solutions | Languages |
| --- | ---: | --- |
| Beecrowd | 171 | C, C++, Python |
| Codeforces | 7 | C++ |

By language:

- **C:** 135 solutions
- **C++:** 39 solutions
- **Python:** 4 solutions

The Codeforces directory also includes a reusable C++ template, which is not counted as a solution.

## Repository structure

```text
.
├── Beecrowds/
│   ├── C/
│   │   ├── AD-HOC/
│   │   ├── Beginner/
│   │   ├── Mathematics/
│   │   └── Strings/
│   ├── C++/
│   │   ├── Beginner/
│   │   ├── Mathematics/
│   │   └── Strings/
│   └── python/
│       ├── Beginner/
│       ├── Mathematics/
│       └── Strings/
└── CodeForces/
    ├── 1A.cpp
    ├── 41A.cpp
    ├── 71A.cpp
    ├── 131A.cpp
    ├── 282A.cpp
    ├── 546A.cpp
    ├── 977A.cpp
    └── template.cpp
```

Beecrowd solutions are grouped by language and problem category. Codeforces solutions are named after their problem ID.

## Running a solution

Clone the repository:

```bash
git clone https://github.com/larissagondim/competitiveProgramming.git
cd competitiveProgramming
```

Then use the appropriate compiler or interpreter. For example:

```bash
# C
gcc Beecrowds/C/Beginner/1000.c -o solution
./solution

# C++
g++ -std=c++17 CodeForces/1A.cpp -o solution
./solution

# Python
python3 Beecrowds/python/Beginner/1145.py
```

Input should be provided through standard input, following the statement for each problem.

## Disclaimer

These solutions are intended for study and reference. Try solving each problem yourself before consulting an existing solution, and follow the rules of the corresponding platform.

## Contributing

This is a personal repository, but suggestions are welcome. If you find a bug or have a more efficient approach, feel free to open an issue.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
