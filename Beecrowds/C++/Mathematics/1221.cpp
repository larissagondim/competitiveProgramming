#include <iostream>
using namespace std;
int main() {
    int teste; cin >> teste;
    for(int i=0; i<teste; i++) {
        long long n; cin >> n;
	bool primo = true;

	if(n<2) primo = false;
        else {
	    for(int j=2; j*j<=n; j++) {
		if(n%j==0) {
		    primo = false;
		    break;
		}
	    }
	}	
	if(primo) cout << "Prime" << endl;
	else cout << "Not Prime" << endl;
    }
    return 0;
}
