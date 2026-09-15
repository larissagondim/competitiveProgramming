#include <stdio.h>
// linha verde
int main(void) {
    int l;
    char t;
    float n, soma = 0;
    scanf("%d", &l);
    scanf(" %c", &t);
    for(int i=0; i<12; i++) {
	for(int j=0; j<12; j++) {
	    scanf("%f", &n);
	    if(i == l) soma += n;
	}
    }
    if(t == 'S') printf("%.1f\n", soma);
    else if(t == 'M') printf("%.1f\n", soma/12.0);

    return 0;
}
