#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C;
    double r1, r2;
    double delta;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    delta = pow(B, 2) - (4*A*C);
    
    if (delta < 0 || A == 0) {
        printf("Impossivel calcular\n");
    } else {
        r1 = (-B + sqrt(delta))/(2*A);
        r2 = (-B - sqrt(delta))/(2*A);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    return 0;
}