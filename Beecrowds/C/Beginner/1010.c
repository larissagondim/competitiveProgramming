#include <stdio.h>
 
int main() {
 
    int a, b, A, B;
    float c, C;
    scanf("%d %d %f %d %d %f", &a, &b, &c, &A, &B, &C);
    printf("VALOR A PAGAR: R$ %.2f\n", ((b*c)+(B*C)));
 
    return 0;
}