#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    double valor; 
    double soma = 0; 
    int contador = 0;
    int calculo = 1; 

    while(calculo != 2){

        if (contador == 0) {
            soma = 0; 
        }
        
        scanf("%lf", &valor);
        
        if(valor < 0 || valor > 10) { 
            printf("nota invalida\n");
        } else {
            soma += valor;
            contador += 1;
        }

        if(contador == 2) {
            double media = soma/2.0; 
            printf("media = %.2lf\n", media);

            do {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &calculo);

            } while (calculo != 1 && calculo != 2);

            if(calculo == 1) {
                contador = 0;
            } else if (calculo == 2) {
                break; 
            }
        }
    }
 
    return 0;
}