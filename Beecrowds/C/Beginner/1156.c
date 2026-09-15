#include <stdio.h>
 
int main() {
 
    double valor, dobro=1, soma = 0;
    int i;
    
    for(i=1; i<=39; i++) {
        if(i%2 != 0) {
            valor = i/dobro;
            soma += valor;
            dobro *= 2;
        }
    }
    printf("%.2lf\n", soma);
    return 0;
}