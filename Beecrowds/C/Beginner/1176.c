#include <stdio.h>

int main(void) {
    unsigned long long fib[61];
    int t, n;

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    if (scanf("%d", &t) == EOF) return 0;

    while (t--) {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }

    return 0;
}