#include <bits/stdc++.h>
using namespace std;


int main(void) {
    int t;
    cin >> t;
    string v = "aeiouAEIOU";
    while(t--) {
    	int n, larg = -1, cons = 0;
    	cin >> n;
    	string s;
    	cin >> s;
    	for(int i = 0; i < n; i++) {
    	    if(v.find(s[i]) == string::npos) {
        		cons += 1;
        		if(cons > larg) larg = cons;
    	    } 
    	    else cons = 0;
    	}
    
    	cout << ((larg >= 4) ? "NO" : "YES") << endl;
    }
    return 0;

}
