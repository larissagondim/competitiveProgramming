#include <stdio.h>

int main(void) {
    int C;
    scanf("%d", &C); 
    for(int i = 0; i < C; i++) {
        int N;
        scanf("%d", &N);
        int notas[N];
        int soma = 0;
        for(int j = 0; j < N; j++) {
            scanf("%d", &notas[j]);
            soma += notas[j]; 
        }
        double media = (double)soma / N; 
        int acima = 0;

        for(int j = 0; j < N; j++) {
            if(notas[j] > media) {
                acima++; 
            }
        }

        double percentual = 100.0 * acima / N;
        printf("%.3lf%%\n", percentual);
    }

    return 0;
}