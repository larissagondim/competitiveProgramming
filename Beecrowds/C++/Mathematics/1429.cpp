#include <iostream>
#include <string>
using namespace std;
int fatorial(int n) {
    int resultado = 1;
    for(int j=1; j<=n; j++) {
	resultado *= j;
    }
    return resultado;
}
int main() {
    string n;
    while(cin >> n) {
	if(n == "0") break;
	int resultado = 0;
	for(int i=0; i<n.size(); i++) {
	    int a = n[i] - '0';
	    int m = fatorial((n.size()-i));
	    resultado += a*m;
	}
	cout << resultado << endl;
    }
    return 0;
}
