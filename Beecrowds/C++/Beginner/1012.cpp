#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    const double PI = 3.14159;

    cin >> A >> B >> C;

    areaTriangulo = (A * C) / 2.0;

    areaCirculo = PI * C * C;

    areaTrapezio = ((A + B) * C) / 2.0;

    areaQuadrado = B * B;

    areaRetangulo = A * B;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}