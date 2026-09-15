#include <stdio.h>

int main(void) {
    float A[100], n;
    for(int i=0; i < sizeof(A)/sizeof(A[0]); i++) {
	    scanf("%f", &n);
	    if(!(n > 10)) printf("A[%d] = %.1f\n", i, n);
    }
    return 0;
}