#include <stdio.h>

int josephus(int N, int K) {
    int resultado = 0;
    for (int I = 2; I <= N; I++) {
        resultado = (resultado + K) % I;
    }
    return resultado;
}

int main() {
 
    int teste;
    int n, k;
    int i, j;
    
    scanf("%d", &teste);
    
    for(i=0; i<teste; i++){
        scanf("%d %d", &n, &k);
        int sobrevivente = josephus(n, k) + 1;
        printf("Case %d: %d\n", (i+1), sobrevivente);
    }
    
    return 0;
}