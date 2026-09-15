#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double temp;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
    } 
    else {
        double a_squared = a * a;
        double b_squared = b * b;
        double c_squared = c * c;
        
        if (fabs(a_squared - (b_squared + c_squared)) < 0.000000001) {
            printf("TRIANGULO RETANGULO\n");
        } 
        else if (a_squared > (b_squared + c_squared)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } 
        else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if (fabs(a - b) < 0.000000001 && fabs(b - c) < 0.000000001) {
            printf("TRIANGULO EQUILATERO\n");
        } 
        else if (fabs(a - b) < 0.000000001 || fabs(b - c) < 0.000000001) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}