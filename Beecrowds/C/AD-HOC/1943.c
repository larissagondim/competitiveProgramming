#include <stdio.h>
 
int main() {
 
    int valor;
    
    scanf("%d", &valor);
    
    if(valor == 1) printf("Top 1\n");
    else if (valor >= 2 && valor <= 3) printf("Top 3\n");
    else if(valor >= 4 && valor <= 5) printf("Top 5\n");
    else if(valor >= 6 && valor <= 10) printf("Top 10\n");
    else if(valor >= 11 && valor <= 25) printf("Top 25\n");
    else if(valor >= 26 && valor <= 50) printf("Top 50\n");
    else if(valor > 50) printf("Top 100\n");
 
    return 0;
}