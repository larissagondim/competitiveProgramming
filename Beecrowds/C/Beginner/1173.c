#include <stdio.h>

int main(void) {
    int N[10], n;
    scanf("%d", &n);
    for(int i=0; i < sizeof(N)/sizeof(N[0]); i++) {
        printf("N[%d] = %d\n", i, n);
	n *= 2;
    }


    return 0;
}
