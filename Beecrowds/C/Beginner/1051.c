#include <stdio.h>

int main() {

    float salario, imposto;

    scanf("%f", &salario);

    if (salario <= 2000.00) {
        printf("Isento\n");
    } else if (salario <= 3000.00) { 
        imposto = (salario - 2000.00) * 0.08;
        printf("R$ %.2f\n", imposto);
    } else if (salario <= 4500.00) {
        imposto = 1000.00 * 0.08;
        imposto += (salario - 3000.00) * 0.18;
        printf("R$ %.2f\n", imposto);
    } else { 
        imposto = 1000.00 * 0.08;
        imposto += 1500.00 * 0.18;
        imposto += (salario - 4500.00) * 0.28;
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}