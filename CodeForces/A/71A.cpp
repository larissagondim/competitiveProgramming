// way too long words
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int tam = s.size();
        if(tam <= 10) cout << s << endl;
        else {
            cout << s[0] << (tam-2) << s[tam - 1] << endl;
        }
    }
    
    return 0;
}   