#include <stdio.h>

int main() {
    float a;           
    int i;           
    int contador = 0;  
    
    for(i = 0; i < 6; i++) {
        scanf("%f", &a); 
        if (a > 0) contador++; 
        
    }
    printf("%d valores positivos\n", contador); 
    
    return 0;
}