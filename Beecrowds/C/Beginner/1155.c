#include <stdio.h>
 
int main() {
 
    double resultado=0;
    int i;
    
    for(i=1; i<=100; i++) {
        resultado += 1.0/(i);
    }
    
    printf("%.2lf\n", resultado);
 
    return 0;
}