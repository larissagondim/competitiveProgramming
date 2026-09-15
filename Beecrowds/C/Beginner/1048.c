#include <stdio.h>

int main() {
    float s, p;

    if (scanf("%f", &s) != 1) return 0;

    if (s <= 400.0) p = 15;
    else if (s <= 800.0) p = 12;
    else if (s <= 1200.0) p = 10;
    else if (s <= 2000.0) p = 7;
    else p = 4;

    printf("Novo salario: %.2f\n", s + (s * p / 100.0));
    printf("Reajuste ganho: %.2f\n", s * p / 100.0);
    printf("Em percentual: %.0f %%\n", p);

    return 0;
}