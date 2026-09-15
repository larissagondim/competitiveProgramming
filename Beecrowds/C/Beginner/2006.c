#include <stdio.h>

int main() {
    int t, n, i, contador = 0;

    if (scanf("%d", &t) != 1) return 0;

    for (i = 0; i < 5; i++)
        if (scanf("%d", &n) == 1 && n == t)
            contador++;

    printf("%d\n", contador);
    return 0;
}