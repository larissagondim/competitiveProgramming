#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int numero, horas;
    double qtPorHora, salario;
    
    cin >> numero >> horas >> qtPorHora;
    
    salario = horas*qtPorHora;
    
    cout << "NUMBER = " << numero << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salario << endl;
    return 0;
}