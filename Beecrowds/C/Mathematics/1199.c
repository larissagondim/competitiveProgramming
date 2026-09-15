#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada[20];

    while (scanf("%s", entrada) && entrada[0] != '-') {
        
        if (entrada[0] == '0' && entrada[1] == 'x') {
            long long int num = strtoll(entrada, NULL, 16);
            printf("%lld\n", num);
        } 
        else {
            long long int num = atoll(entrada);
            printf("0x%llX\n", num);
        }
    }

    return 0;
}
