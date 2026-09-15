#include <stdio.h>

int main(void) {
    int N[100], i;
    double a;
    scanf("%lf", &a);
    for(i=0; i < (sizeof(N)/sizeof(N[0])); i++) {
	printf("N[%d] = %.4lf\n", i, a);
	a /= 2.0;
    }

    return 0;
}
