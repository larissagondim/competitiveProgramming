#include <stdio.h>
 
int main() {
 
    int valor, linha;
    
    scanf("%d %d", &linha, &valor);
    
    for(int i=1; i<=valor; i++) {
        if(i%linha==0) printf("%d\n", i);
        else printf("%d ", i);
    }
 
    return 0;
}