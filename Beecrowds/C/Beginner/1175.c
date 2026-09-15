#include <stdio.h>

int main(void) {
    int N[20];
    int i, a;
    int length = sizeof(N) / sizeof(N[0]);
    for(i=0; i<length; i++) {
        scanf("%d", &a);
	N[length - i - 1] = a;
    }
    for(i=0; i<length; i++) printf("N[%d] = %d\n", i, N[i]);
    
    return 0;
}
