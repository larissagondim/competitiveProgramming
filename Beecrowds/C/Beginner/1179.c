#include <stdio.h>
// par ou impar
int main() {
    int par[5], impar[5], i, a, p=0, imp=0;
    int length = sizeof(par) / sizeof(par[0]);
    for(i=0; i<15; i++) {
        scanf("%d", &a);
	if(a%2==0) {
	    par[p++] = a;
	    if(p==5) {
		for(int j=0; j<length; j++) printf("par[%d] = %d\n", j, par[j]);
		p = 0;
	    }
	}
	else {
	    impar[imp++] = a;
	    if(imp == 5) {
		for(int j=0; j<length; j++) printf("impar[%d] = %d\n", j, impar[j]);
                imp = 0;
	    }
	}
	
    }
    for(i=0; i < imp; i++) printf("impar[%d] = %d\n", i, impar[i]);
    for(i=0; i < p; i++) printf("par[%d] = %d\n", i, par[i]);

    return 0;
}
