#include <stdio.h>

int main(void) {
    int n;
    double denominador = 0, resultado;
    scanf("%d", &n);
    if(n == 0) printf("3\n");
    else {
        for(int i=0; i<n; i++) 
	    denominador = 1/(6.0 + denominador);
	resultado = 3 + denominador;
    }
    printf("%.10lf\n", resultado);
    return 0;
}
