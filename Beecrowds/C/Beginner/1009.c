#include <stdio.h>

int main() {
    char nome[100]; 
    double salary, sold; 
    
    scanf("%s", nome);           
    scanf("%lf %lf", &salary, &sold); 

    printf("TOTAL = R$ %.2lf\n", (salary + (sold * 0.15)));

    return 0;
}