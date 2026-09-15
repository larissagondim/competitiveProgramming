#include <stdio.h>
 
int main() {
 
    double F1, F2;
    
    scanf("%lf %lf", &F1, &F2);
    
    double flutuacao = ((1 + F1/100) * (1 + F2/100) - 1) * 100;
    
    printf("%.6lf\n", flutuacao);
 
    return 0;
}