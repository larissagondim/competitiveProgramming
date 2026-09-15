#include <stdio.h>

int main(void) {
    int tipo, i;

    scanf("%d", &tipo);

    int pecas = tipo+1;

    for(i=1; i<=tipo; i++) {
        pecas += i;
    }

    printf("%d\n", pecas);

    return 0;
}