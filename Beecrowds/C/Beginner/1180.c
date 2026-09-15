#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int X[n];
    for(int i = 0; i < n; i++) scanf("%d", &X[i]);
    int menorvalor = X[0];
    int indice = 0;
    for(int i = 1; i < n; i++) {
	if(X[i] < menorvalor) {
	    menorvalor = X[i];
	    indice = i;
	}
    }
    printf("Menor valor: %d\nPosicao: %d\n", menorvalor, indice);
    return 0;
}
