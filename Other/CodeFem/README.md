# Online Contest — Solved Problems

Solutions for problems D, F, G, and I from a competitive programming contest.

## Problems

| Problem | Name | Main topic |
|---|---|---|
| [D](#d--lighting-a-new-playground) | Lighting a New Playground | Pigeonhole principle |
| [F](#f--cafe-hopping) | Cafe Hopping | Sliding window |
| [G](#g--macaron-conveyor) | Macaron Conveyor | Simulation and prefix sums |
| [I](#i--fruit-punch) | Fruit Punch | Combinations |

---

## D — Lighting a New Playground

There are `n` points where lights will be installed and `k` available colors. Each light has exactly one color.

Regardless of the arrangement of the points and the distribution of the colors, determine how many vertices can be guaranteed for the largest polygon whose vertices are lights of the same color.

A polygon may be convex or non-convex. No three points are collinear. If it is not possible to guarantee a polygon, print `0`.

### Input

- The first line contains an integer `T`, the number of test cases.
- Each test case contains two integers `n` and `k`:
  - `n`: the number of points;
  - `k`: the number of available colors.

### Constraints

- `1 ≤ T ≤ 1000`
- `3 ≤ n ≤ 10¹⁵`
- `1 ≤ k ≤ 10¹⁵`

### Output

For each test case, print the guaranteed number of vertices of the largest polygon. If it is not possible to form a polygon, print `0`.

### Example

```text
Input:
2
10 3
7 4

Output:
4
0
```

---

## F — Cafe Hopping

Ashley found `N` cafes arranged along the same street. At cafe `i`, a drink costs `aᵢ` coins.

She wants to visit a consecutive group of cafes and buy exactly one drink at each of them. Given a budget of `B` coins, determine the largest number of consecutive cafes she can visit without exceeding her budget.

If Ashley cannot afford even one drink, the answer should be `0`.

### Input

- The first line contains two integers `N` and `B`:
  - `N`: the number of cafes;
  - `B`: the available budget.
- The second line contains `N` integers `a₁, a₂, ..., aₙ`, representing the drink prices.

### Constraints

- `1 ≤ N ≤ 100000`
- `0 ≤ B ≤ 10¹⁵`
- `1 ≤ aᵢ ≤ 10¹⁴`

### Output

Print a single integer: the largest size of a consecutive group whose total price is at most `B`.

### Examples

```text
Input:
7 15
4 7 2 6 3 8 1

Output:
3
```

```text
Input:
5 100
12 8 15 9 6

Output:
5
```

```text
Input:
4 3
5 4 7 6

Output:
0
```

---

## G — Macaron Conveyor

There are `N` trays arranged from left to right on a conveyor belt. Tray `i` initially contains `aᵢ` macarons.

In one operation, it is possible to choose a tray `i`, with `1 ≤ i < N`, that contains at least one macaron, and move exactly one macaron from tray `i` to tray `i + 1`.

Determine whether it is possible to make all trays contain exactly the same number of macarons. If it is possible, print the minimum number of operations. Otherwise, print `-1`.

### Input

- The first line contains an integer `N`, the number of trays.
- The second line contains `N` integers `a₁, a₂, ..., aₙ`, representing the initial number of macarons in each tray.

### Constraints

- `1 ≤ N ≤ 100`
- `0 ≤ aᵢ ≤ 10⁴`

### Output

Print:

- the minimum number of operations if it is possible to equalize all trays;
- `-1` if the desired configuration is impossible.

### Examples

```text
Input:
3
7 3 2

Output:
5
```

```text
Input:
4
1 5 3 3

Output:
-1
```

```text
Input:
5
2 2 2 2 2

Output:
0
```

---

## I — Fruit Punch

Alejandra bought `n` ingredients to test different fruit punch recipes. Her sister wants to buy exactly `k` ingredients, and they agreed that all ingredients have the same price.

They also agreed that each of them will use all the ingredients they choose and that they cannot use the same ingredient. After the sister buys her `k` ingredients, how many different choices can she make?

Since the result can be very large, print the answer modulo `122333221`.

### Input

- The first line contains an integer `T`, the number of test cases.
- Each test case contains two integers `n` and `k`:
  - `n`: the number of ingredients;
  - `k`: the number of ingredients the sister will buy.

### Constraints

- `1 ≤ T ≤ 100`
- `1 ≤ k ≤ n ≤ 10⁵`

### Output

For each test case, print the number of possible choices of `k` ingredients, modulo `122333221`.

### Example

```text
Input:
3
10 3
65 5
54321 12

Output:
120
8259888
112530695
```

---

## Organization

```text
.
├── README.md
├── D.cpp
├── F.cpp
├── G.cpp
└── I.cpp
```

Each file contains the solution for the corresponding problem.
