#include <stdio.h>

int main() {
    int b, g;
    scanf("%d", &b);
    scanf("%d", &g);

    int necessario = g / 2;
    int falta = necessario - b;

    if (falta > 0) printf("Faltam %d bolinha(s)\n", falta);
    else printf("Amelia tem todas bolinhas!\n");

    return 0;
}