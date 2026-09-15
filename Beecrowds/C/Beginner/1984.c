#include <stdio.h>
#include <string.h>

int main() {
 
    char numero[100];
    char temp;
    int i, j;
    
    scanf("%s", &numero);
    
    int tam = strlen(numero);
    
    for(i=0; i<tam/2; i++) {
       temp = numero[i];
       numero[i] = numero[tam - 1 - i];
       numero[tam-i-1] = temp;
    }
    
    printf("%s\n", numero);
    return 0;
}