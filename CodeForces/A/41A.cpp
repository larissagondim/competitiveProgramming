// 41A - Translation
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, t;
    cin >> s >> t;
    
    if(s.size() != t.size()) {
	cout << "NO" << endl;
	return 0;
    }
    int tam = t.size();
    string reversed(tam, ' ');
     
    for(int i = 0; i < tam; i++) {
	reversed[i] = t[tam - i - 1];
    }

    int isReverse = 1;

    for(int j = 0; j < tam; j++) {
	if(reversed[j] != s[j]) {
	    isReverse = 0;
	    break;
	}
    }
    cout << (reversed == s ? "YES\n" : "NO\n");
    return 0;
}
