// 344A - Magnets
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, i, magnets = 1; 
    cin >> n;
 
    vector<int> m(n); 
    bool sequence  = false;
 
    for(i = 0; i < n; i++) {
        cin >> m[i];
        if(i > 0) { 
            sequence = (m[i-1] == m[i]) ? true : false;
            if(!sequence) magnets++;
        }
    }
 
    cout << magnets << endl;
 
    return 0;
}