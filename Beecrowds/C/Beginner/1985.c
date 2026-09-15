#include <stdio.h>
 
int main() {
 
    int qtComprado, codigo, qtConsumidor, qt, i;
    double valor, total=0;
    
    scanf("%d", &qtComprado);
    
    for(i=0; i<qtComprado; i++) {
        scanf("%d %d", &codigo, &qtConsumidor);
        switch(codigo) {
            case 1001:
                valor = 1.50;
                break;
            case 1002:
                valor = 2.50;
                break;
            case 1003:
                valor = 3.50;
                break;
            case 1004:
                valor = 4.50;
                break;
            case 1005:
                valor = 5.50;
                break;
            default:
                break;
        }
        valor *= qtConsumidor;
        total += valor;
    }
    printf("%.2lf\n", total);
 
    return 0;
}