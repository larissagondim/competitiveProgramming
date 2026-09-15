#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    std::string nome;
    double salario, vendas, bonus;
    
    std::cin >> nome;
    cin>>salario>>vendas;
    
    bonus = salario + (vendas*0.15);
    
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<bonus<<endl;
    
    return 0;
}