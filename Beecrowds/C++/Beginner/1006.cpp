#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double valorUm;
    double valorDois;
    double valorTres;
    double media;
    
    cin >> valorUm >> valorDois >> valorTres;
    
    media = (valorUm * 2 + valorDois * 3 + valorTres * 5)/10;
    
    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;
    return 0;
}