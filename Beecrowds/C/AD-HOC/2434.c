#include <stdio.h>

int main(void) {
    int dias, saldo;
    int i, mov;

    scanf("%d %d", &dias, &saldo);
    int menorsaldo = saldo;

    for(i=0; i<dias; i++) {
        scanf("%d", &mov);
        saldo += mov;
        if(saldo<menorsaldo) menorsaldo = saldo;
    }

    printf("%d\n", menorsaldo);

    return 0;
}