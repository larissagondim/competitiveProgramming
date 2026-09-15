#include <stdio.h>

int main() {
    double valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int i, centavos;

    if (scanf("%lf", &valor) != 1) return 0;

    centavos = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++)
        printf("%d nota(s) de R$ %d.00\n", centavos / (notas[i] * 100), centavos / (notas[i] * 100)), 
        centavos %= (notas[i] * 100);

    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++)
        printf("%d moeda(s) de R$ %.2f\n", centavos / moedas[i], moedas[i] / 100.0), 
        centavos %= moedas[i];

    return 0;
}