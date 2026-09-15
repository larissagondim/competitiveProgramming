#include <stdio.h>
 
int main() {
 
    int linha, coluna;
    int cor;
    
    scanf("%d", &linha);
    scanf("%d", &coluna);
    
    if((linha+coluna)%2==0) cor=1;
    else cor=0;
    
    printf("%d\n", cor);
 
    return 0;
}