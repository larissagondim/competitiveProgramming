#include <stdio.h>
 
int main() {
 
    long long int valor=1, soma=0;
    
    while(1) {
        scanf("%lld", &valor);
        if(valor==0) break;
        if(valor % 2 != 0) valor += 1;
        soma += (valor*5 + 20);
        printf("%lld\n", soma);
        soma = 0;
    }
 
    return 0;
}