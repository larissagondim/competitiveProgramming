#include <stdio.h>

int main() {
    int i_multiplicado;

    for (i_multiplicado = 0; i_multiplicado <= 20; i_multiplicado += 2) {
        
        float i = i_multiplicado / 10.0;

        if (i_multiplicado % 10 == 0) {
            printf("I=%.0f J=%.0f\n", i, i + 1);
            printf("I=%.0f J=%.0f\n", i, i + 2);
            printf("I=%.0f J=%.0f\n", i, i + 3);
        } else {
            printf("I=%.1f J=%.1f\n", i, i + 1);
            printf("I=%.1f J=%.1f\n", i, i + 2);
            printf("I=%.1f J=%.1f\n", i, i + 3);
        }
    }

    return 0;
}