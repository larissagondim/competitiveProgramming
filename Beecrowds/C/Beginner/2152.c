#include <stdio.h>

int main() {

    int hora, minuto, ocorrencia;
    int i, teste;

    scanf("%d", &teste);

    for (i = 0; i < teste; i++) {
        scanf("%d %d %d", &hora, &minuto, &ocorrencia);

        printf("%02d:%02d - A porta ", hora, minuto);

        if (ocorrencia == 1) {
            printf("abriu!\n");
        } else {
            printf("fechou!\n");
        }
    }

    return 0;
}