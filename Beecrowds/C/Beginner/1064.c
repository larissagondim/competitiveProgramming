#include <stdio.h>
 
int main() {
 
    float a;
    float soma=0;
    int contador = 0;
    
    for(int i=0; i<6; i++) {
        scanf("%f", &a);
        if (a>0) {
            soma += a;
            contador++;
        }
    }
    
    float media = soma/(contador*1.0);
    printf("%d valores positivos\n", contador);
    printf("%.1f\n", media);
 
    return 0;
}