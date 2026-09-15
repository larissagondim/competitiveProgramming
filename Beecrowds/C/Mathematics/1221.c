#include <stdio.h>

int EhPrimo(int Numero) {
    int i;
    if (Numero <= 1) return 0; 
    if (Numero == 2) return 1; 
    if (Numero % 2 == 0) return 0;
    for (i = 3; i * i <= Numero; i += 2) {
        if (Numero % i == 0) return 0; 
    }
    return 1;
}

int main() {
    int teste;
    int j;
    int numero;
    
    scanf("%d", &teste);
    
    for(j=0; j<teste; j++) {
        scanf("%d", &numero);
        int resultado = EhPrimo(numero);
        if(resultado == 0) printf("Not Prime\n");
        else if(resultado == 1) printf("Prime\n");
    }
}