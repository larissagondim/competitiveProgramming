#include <stdio.h>

int main(void) {
    
    unsigned long long patinho;
    
    while (scanf("%llu", &patinho) == 1 && patinho != (unsigned long long)-1) {
        
        if (patinho == 0) {
            printf("0\n"); 
        } else {
            printf("%llu\n", patinho - 1); 
        }
    }

    return 0;
}