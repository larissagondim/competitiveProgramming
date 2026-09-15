#include <stdio.h>

int main(void) {
    int X[10];
    int tam = sizeof(X) / sizeof(X[0]);
    int i, a;
    for(i=0; i<tam; i++) {
	scanf("%d", &a);
	if(!(a>0)) X[i] = 1;
	else X[i] = a;
	printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;
}
