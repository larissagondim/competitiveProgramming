#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valorUm;
    double valorDois;
    double media;
    
    cin>>valorUm>>valorDois;
    
    media = (valorUm*3.5  + valorDois*7.5)/11;
    
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<media<<endl;
    
    return 0;
}