#include <stdio.h>
 
int main() {
 
    int i, teste, valor;
    scanf("%d", &teste);
    
    for(i=0; i<teste; i++) {
        scanf("%d", &valor);
        if(valor%2==0) printf("0\n");
        else printf("1\n");
    }
 
    return 0;
}