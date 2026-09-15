#include <iostream>
using namespace std;

int main() {
    float valor;
    int positivos = 0;

    for(int i = 0; i < 6; i++) cin >> valor, positivos += (valor > 0);

    cout << positivos << " valores positivos" << endl;

    return 0;
}
