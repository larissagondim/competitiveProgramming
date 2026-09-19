# Competitive Programming Solutions

This repository contains solutions to competitive programming problems from [Beecrowd](https://www.beecrowd.com.br/), [Codeforces](https://codeforces.com/), and the CodeFem contest collection. It is also a record of practice with algorithms, data structures, and the C, C++, and Python languages.

## Current progress

The repository currently contains **184 solution files**, plus one reusable C++ template:

| Collection | Solutions | Languages |
| --- | ---: | --- |
| Beecrowd | 171 | C, C++, Python |
| Codeforces | 9 | C++, Python |
| CodeFem | 4 | C++ |

By language:

- **C:** 135 solutions
- **C++:** 44 solutions
- **Python:** 5 solutions

The C++ template in [`CodeForces/template.cpp`](CodeForces/template.cpp) is not included in these counts.

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
│   ├── python/
│   │   ├── Beginner/
│   │   ├── Mathematics/
│   │   └── Strings/
│   └── README.md
├── CodeForces/
│   ├── 1A.cpp
│   ├── 41A.cpp
│   ├── 71A.cpp
│   ├── 131A.cpp
│   ├── 271A.cpp
│   ├── 271A.py
│   ├── 282A.cpp
│   ├── 546A.cpp
│   ├── 977A.cpp
│   ├── README.md
│   └── template.cpp
├── Other/
│   └── CodeFem/
│       ├── D.cpp
│       ├── F.cpp
│       ├── G.cpp
│       ├── I.cpp
│       └── README.md
├── LICENSE
└── README.md
```

- [`Beecrowds/README.md`](Beecrowds/README.md) documents the Beecrowd solutions by problem, language, and topic.
- [`CodeForces/README.md`](CodeForces/README.md) lists the Codeforces problems and explains how to run them.
- [`Other/CodeFem/README.md`](Other/CodeFem/README.md) documents the four CodeFem contest problems.

## Running a solution

Clone the repository:

```bash
git clone https://github.com/larissagondim/competitiveProgramming.git
cd competitiveProgramming
```

Each solution is standalone and reads from standard input. Use the appropriate compiler or interpreter. For example:

```bash
# C
gcc -std=c11 -O2 -Wall Beecrowds/C/Beginner/1000.c -o solution
./solution < input.txt

# C++
g++ -std=c++17 -O2 -Wall CodeForces/1A.cpp -o solution
./solution < input.txt

# Python
python3 Beecrowds/python/Beginner/1145.py < input.txt
```

Input and output follow the statement for each problem.

## Disclaimer

These solutions are intended for study and reference. Try solving each problem yourself before consulting an existing solution, and follow the rules of the corresponding platform.

## Contributing

This is a personal repository, but suggestions are welcome. If you find a bug or have a more efficient approach, feel free to open an issue.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
