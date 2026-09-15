#include <stdio.h>

int main() {

    int a = 0;
    int soma = 0;
    int contador = 0;
    float media;

    while (1) {
        scanf("%d", &a);
        if (a < 0) break;
        soma += a;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("%.2f\n", media);
    } else printf("Nenhum valor positivo foi inserido.\n");
    

    return 0;
}