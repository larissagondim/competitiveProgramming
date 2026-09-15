#include <stdio.h>

int main() {
    int n, i;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    if (scanf("%d", &n) != 1) return 0;

    printf("%d\n", n);

    for (i = 0; i < 7; i++)
        printf("%d nota(s) de R$ %d,00\n", n / notas[i], notas[i]), 
        n %= notas[i];

    return 0;
}