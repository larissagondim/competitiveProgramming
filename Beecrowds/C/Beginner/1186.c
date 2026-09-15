#include <stdio.h>

int main(void) {
    char o;
    double M[12][12], soma=0;
    int cont = 0;
    scanf(" %c", &o);

    for(int i=0; i<12; i++) {
	for(int j=0; j<12; j++) {
	    scanf("%lf", &M[i][j]);
	    if((i+j)>11) {
		soma += M[i][j];
		cont++;
	    }
	}
    }
    if(o=='S') printf("%.1lf\n", soma);
    else if(o=='M') printf("%.1lf\n", (soma/(float)cont));
    return 0;

}
