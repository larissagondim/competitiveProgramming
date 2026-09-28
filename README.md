# Competitive Programming Solutions

This repository contains solutions to competitive programming problems from [Beecrowd](https://www.beecrowd.com.br/), [Codeforces](https://codeforces.com/), [CSES](https://cses.fi/problemset/), CodeChef, and the CodeFem contest collection. It is also a record of practice with algorithms, data structures, and the C, C++, and Python languages.

## Current progress

The repository currently contains **222 problem source files**, plus one reusable C++ template. Counts include work in progress and do not imply accepted submissions.

| Collection | Source files | Languages | Documentation |
| --- | ---: | --- | --- |
| Beecrowd | 171 | C, C++, Python | [README](Beecrowds/README.md) |
| Codeforces | 36 | C++, Python | [README](CodeForces/README.md) |
| CodeChef | 6 | C++ | [README](CodeChef/README.md) |
| CSES | 5 | C++ | [README](CSES/README.md) |
| CodeFem | 4 | C++ | [README](Other/contests/CodeFem/README.md) |

By language: **135 C**, **81 C++**, and **6 Python** source files.
The C++ template in [`template.cpp`](template.cpp) is excluded.
Multiple implementations of the same problem count as separate files.
`CSES/permutations.cpp` is currently an unfinished implementation.

## Repository structure

```text
.
├── Beecrowds/           # Organized by language, then topic
│   ├── C/              # AD-HOC, Beginner, Mathematics, Strings
│   ├── C++/            # Beginner, Mathematics, Strings
│   └── python/         # Beginner, Mathematics, Strings
├── CodeForces/         # Organized by problem letter
│   ├── A/
│   ├── B/
│   └── C/
├── CodeChef/           # Six C++ problem files
├── CSES/               # Five C++ problem files, including one in progress
├── Other/
│   └── contests/
│       └── CodeFem/    # Problems D, F, G, and I
├── docs/
│   └── README.md       # Documentation coverage and pending READMEs
├── template.cpp       # Shared C++ starter template
├── LICENSE
└── README.md
```

See [Other](Other/README.md) for contest collections and the
[documentation tracker](docs/README.md) for folders without their own README.

## Running a solution

Clone the repository:

```bash
git clone https://github.com/larissagondim/competitiveProgramming.git
cd competitiveProgramming
```

Each source file is a standalone program that reads from standard input. Install GCC/G++ for C/C++ or Python 3 for Python programs. Use the appropriate compiler or interpreter. For example:

```bash
# C
gcc -std=c11 -O2 -Wall Beecrowds/C/Beginner/1000.c -o solution
./solution < input.txt

# C++
g++ -std=c++17 -O2 -Wall CodeForces/A/1A.cpp -o solution
./solution < input.txt

# Python
python3 Beecrowds/python/Beginner/1145.py < input.txt
```

For a CSES solution, compile and run the selected file from the repository root:

```bash
g++ -std=c++17 -O2 -Wall CSES/missing-number.cpp -o solution
./solution < input.txt
```

Create `input.txt` with the desired test input, or omit `< input.txt` to type input in the terminal. Input and output follow the statement for each problem.

## Disclaimer

These solutions are intended for study and reference. Try solving each problem yourself before consulting an existing solution, and follow the rules of the corresponding platform.

## Contributing

This is a personal repository, but suggestions are welcome. If you find a bug or have a more efficient approach, feel free to open an issue.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
