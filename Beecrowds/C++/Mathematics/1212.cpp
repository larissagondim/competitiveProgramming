#include <iostream>
using namespace std;

int main() {
    unsigned int a, b;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;

        int contador = 0;
        int carry = 0;

        while (a > 0 || b > 0) {
            int digA = a % 10;
            int digB = b % 10;

            if (digA + digB + carry >= 10) {
                contador++;
                carry = 1;
            } else {
                carry = 0;
            }

            a /= 10;
            b /= 10;
        }

        if (contador == 0)
            cout << "No carry operation." << endl;
        else if (contador == 1)
            cout << "1 carry operation." << endl;
        else
            cout << contador << " carry operations." << endl;
    }

    return 0;
}

