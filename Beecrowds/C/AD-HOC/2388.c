#include <stdio.h>
 
int main() {
 
    int teste, i;
    int t, v;
    int soma = 0;
    
    scanf("%d", &teste);
    
    for(i=0; i<teste; i++) {
        scanf("%d %d", &t, &v);
        soma += (t*v);
    }
    printf("%d\n", soma);
 
    return 0;
}