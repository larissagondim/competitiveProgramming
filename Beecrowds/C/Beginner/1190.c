#include <stdio.h>

int main(void) {
    double M[12][12], soma = 0;
    char o;
    int cont = 0;
    scanf(" %c", &o);
    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            scanf("%lf", &M[i][j]);
            if((j > i) && (j+i) > 11) {
                soma += M[i][j];
                cont++;
            }
        }
    }
    if(o=='S') printf("%.1f\n", soma);
    else if(o=='M') printf("%.1f\n", (soma/(double)cont));

    return 0;
}

