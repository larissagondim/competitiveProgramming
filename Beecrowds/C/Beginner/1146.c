#include <stdio.h>
 
int main() {
 
    int valor, i;
    
    while(1) {
        scanf("%d", &valor);
        if(valor == 0) break;
        for(i=1; i<=valor; i++) {
            if(i==valor) printf("%d\n", i);
            else printf("%d ", i);
        }
    }
 
    return 0;
}