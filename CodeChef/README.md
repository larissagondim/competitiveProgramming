# CodeChef

This collection contains **6 C++ source files**. Filenames combine a numeric prefix
and a problem name; the prefixes are recorded as local filenames, not verified platform identifiers.
Submission verdicts are not tracked here.

## Solutions

| Problem | File | Approach in the source |
| --- | --- | --- |
| Easy Pronunciation | [`1000_easy-pronunciation.cpp`](1000_easy-pronunciation.cpp) | Count consecutive consonants |
| ATM Machine | [`1001_ATM-machine.cpp`](1001_ATM-machine.cpp) | Simulate withdrawals from the remaining balance |
| TCS Examination | [`1002_TCS-Examination.cpp`](1002_TCS-Examination.cpp) | Compare total scores, then apply tie breakers |
| Adjacent Sum | [`1003_Adjacent-Sum.cpp`](1003_Adjacent-Sum.cpp) | Check the parity of the sum |
| Candies | [`1004_Candies.cpp`](1004_Candies.cpp) | Count frequencies and check that none exceed two |
| Chef Diet | [`1005_Chef_Diet.cpp`](1005_Chef_Diet.cpp) | Track the daily balance and the first shortage |

## How to run

Compile one solution with GCC/G++ and C++17 from the repository root:

```bash
g++ -std=c++17 -O2 -Wall CodeChef/1005_Chef_Diet.cpp -o solution
./solution < input.txt
```

Replace the source path with the desired file. Create `input.txt` with the problem input,
or omit `< input.txt` to enter input directly. Each program reads standard input and writes standard output.

[Repository overview](../README.md) · [Documentation tracker](../docs/README.md)
