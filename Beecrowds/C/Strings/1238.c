#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char a[55], b[55];
        scanf("%s %s", a, b);

        int lenA = strlen(a);
        int lenB = strlen(b);
        int max = (lenA > lenB) ? lenA : lenB;

        for (int i = 0; i < max; i++) {
            if (i < lenA)
                printf("%c", a[i]);

            if (i < lenB)
                printf("%c", b[i]);
        }

        printf("\n");
    }

    return 0;
}