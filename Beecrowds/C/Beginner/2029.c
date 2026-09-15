#include <stdio.h>
#define PI 3.14

int main(void) {
    double v, d;
    while(scanf("%lf %lf", &v, &d) != EOF) {
	double raio = d/2.0;
        double area = PI * raio * raio;
        double altura = v/area;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura, area);
    }
    return 0;
}
