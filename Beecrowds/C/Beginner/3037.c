#include <stdio.h>

int main() {
    int teste, i, j;
    int x, d;
    
    scanf("%d", &teste);
    
    for(i = 0; i < teste; i++) {
        
        long long total_joao = 0;
        long long total_maria = 0;
        
        for(j = 0; j < 3; j++) {
            scanf("%d %d", &x, &d);
            total_joao += (x * d);
        }
        
        for(j = 0; j < 3; j++) {
            scanf("%d %d", &x, &d);
            total_maria += (x * d); 
        }
        
        if (total_joao > total_maria) printf("JOAO\n");
        else printf("MARIA\n");
    }

    return 0;
}