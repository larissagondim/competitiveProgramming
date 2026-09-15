#include <stdio.h>
#include <string.h>
int main(void) {
    int n, s, b, a, si, bi, ai;
    double saque = 0, bloqueio = 0, ataque = 0; 
    double saque_i = 0, bloqueio_i = 0, ataque_i = 0;
    char nome[50];
    scanf("%d", &n);
    for(int i = 0; i < n; i++ ) {
        scanf("%s", nome);
        scanf("%d %d %d", &s, &b, &a);
        saque += s;
        bloqueio += b;
        ataque += a;
        scanf("%d %d %d", &si, &bi, &ai);
        saque_i +=  si;
        bloqueio_i += bi;
        ataque_i += ai;
    }
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n", (saque_i/saque)*100.0, (bloqueio_i/bloqueio)*100.0, (ataque_i/ataque)*100.0);

    return 0;
}
