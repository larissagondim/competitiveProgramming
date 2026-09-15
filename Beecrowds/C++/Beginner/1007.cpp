#include <iostream>

using namespace std;

int main() {
    
    int valorUm, valorDois, valorTres, valorQuatro;
    int diferenca;
    
    cin >> valorUm >> valorDois >> valorTres >> valorQuatro;
    
    diferenca = (valorUm * valorDois) - (valorTres*valorQuatro);
    
    cout << "DIFERENCA = " << diferenca << endl;
    
    return 0;
}