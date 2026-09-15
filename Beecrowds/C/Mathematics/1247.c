#include <stdio.h>
#include <math.h>

int main() {
    int D, VF, VG;

    while (scanf("%d %d %d", &D, &VF, &VG) != EOF) {
        double tempo_fugitivo = 12.0 / VF;
        double tempo_guarda = sqrt(D * D + 12.0 * 12.0) / VG;
        printf("%s\n", tempo_guarda <= tempo_fugitivo ? "S" : "N");
    }

    return 0;
}