#include <stdio.h>
 
int main() {
 
    int n;
    int brancas, pretas;
    
    scanf("%d", &n);
    
    if(n%2==0) {
        brancas = (n*n)/2;
        pretas = (n*n)/2;
    }
    else {
        brancas = (n*n + 1)/2;
        pretas = (n*n)/2;
    }
    
    printf("%d casas brancas e %d casas pretas\n", brancas, pretas);
 
    return 0;
}