#include <stdio.h>

int main() {
    int t, n, i, p;

    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        scanf("%d", &n);
        p = n > 1;

        if (n > 2 && n % 2 == 0) p = 0;
        else
            for (i = 3; i * i <= n; i += 2)
                if (n % i == 0 && (p = 0)) break;

        if (p) printf("%d eh primo\n", n);
        else printf("%d nao eh primo\n", n);
    }

    return 0;
}