#include <stdio.h>
 
int main() {
 
    int teste;
    
    scanf("%d", &teste);
    
    for(int i=0; i<teste; i++) {
        int resposta;
        scanf("%d", &resposta);
        printf("resposta %d: %d\n", (i+1), resposta);
    }
 
    return 0;
}