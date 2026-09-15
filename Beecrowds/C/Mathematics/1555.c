#include <stdio.h>

int Rafael(int x, int y) {
    return (3*x*3*x) + y*y;
}

int Beto(int x, int y) {
    return (2*x*x + 5*5*y*y);
}

int Carlos(int x, int y) {
    return (-100*x + y*y*y);
}

int Comparar(int a, int b, int c) {
    if(a>b && a>c) return a;
    if(b>a && b>c) return b;
    if(c>a && c>b) return c;
}

int main() {
 
    int teste, i;
    int X, Y;
    int rafael, beto, carlos;
    int resultado;
    
    scanf("%d", &teste);
 
    for(i=0; i<teste; i++) {
        scanf("%d %d", &X, &Y);
        rafael = Rafael(X, Y);
        beto = Beto(X, Y);
        carlos = Carlos(X, Y);
        resultado = Comparar(rafael, beto, carlos);
        
        if(resultado == rafael) printf("Rafael ganhou\n");
        else if(resultado == beto) printf("Beto ganhou\n");
        else if(resultado == carlos) printf("Carlos ganhou\n");
    }
    
    return 0;
}