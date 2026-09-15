#include <stdio.h>
 
int main() {
 
    int teste, i, j;
    int valor, quantidade, soma=0;
    
    scanf("%d", &teste);
    for(i=0; i<teste; i++) {
        scanf("%d %d", &valor, &quantidade);
        if(valor%2==0) valor+=1;
        for(j=0; j<quantidade; j++) {
            soma += valor;
            valor += 2;
        }
        printf("%d\n", soma);
        soma = 0;
    }
 
    return 0;
}