#include <iostream>
#include <string>
using namespace std;
int main() {
    int t; cin >> t;
    string s, s2;
    for(int i=0; i<t; i++) {
	cin >> s >> s2;
	bool pertence = true;
	for(int j=0; j<s2.size(); j++){
	    if(s[s.size()-s2.size()+j] != s2[j]) {
	        pertence = false;
		break;
	    }	
	}
	if(pertence) cout << "encaixa" << endl;
	else cout << "nao encaixa" << endl;
    }

    return 0;
}
