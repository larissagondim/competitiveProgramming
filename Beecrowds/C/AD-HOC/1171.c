#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int x, frequencia[2001] = {0}; 
    for(int i = 0; i < n; i++) {
	scanf("%d", &x);
	if(x>=1 && x<=2000) frequencia[x]++;
    }
    for(int i = 1; i <= 2000; i++) {
	if(frequencia[i] > 0) printf("%d aparece %d vez(es)\n", i, frequencia[i]);
    }	

    return 0;
}
