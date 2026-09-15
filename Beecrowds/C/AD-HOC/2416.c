#include <stdio.h>
 
int main() {
 
    int metros, comprimento;
    
    scanf("%d %d", &metros, &comprimento);
    
    int resto = metros%comprimento;
    
    printf("%d\n", resto);
 
    return 0;
}