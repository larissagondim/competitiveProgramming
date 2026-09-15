#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    
    int codigo, pecas;
    int codigo2, pecas2;
    float valor, valorPagar;
    float valor2, valorPagar2;
    float valorTotal;
    
    cin>>codigo>>pecas>>valor;
    cin>>codigo2>>pecas2>>valor2;
    
    valorPagar = valor*pecas;
    valorPagar2 = valor2*pecas2;
    valorTotal = valorPagar + valorPagar2;
    
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<valorTotal<<endl;
    
    return 0;
}