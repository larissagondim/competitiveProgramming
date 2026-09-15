#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long calcular_variacoes(char *senha) {
    long long total = 1;
    for (int i = 0; senha[i] != '\0'; i++) {
        char c = tolower(senha[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 's') total *= 3;
        else if (c >= 'a' && c <= 'z') total *= 2;
    }
    return total;
}

int main() {
    int t;
    char senha[18]; 
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        if (scanf("%s", senha) == 1) printf("%lld\n", calcular_variacoes(senha));
    }
    
    return 0;
}