#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    
    double raio;
    double volume;
    
    cin>>raio;
    
    volume = (4/3.0)*raio*raio*raio*3.14159;
    
    cout<<fixed<<setprecision(3)<<"VOLUME = " << volume<<endl;
    
    return 0;
}