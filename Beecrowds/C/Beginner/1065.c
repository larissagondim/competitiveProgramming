#include <stdio.h>
 
int main() {
 
    int a;
    int soma=0;
    int contador = 0;
    
    for(int i=0; i<5; i++) {
        scanf("%d", &a);
        if (a%2==0) {
            contador++;
        }
    }

    printf("%d valores pares\n", contador);
 
    return 0;
}