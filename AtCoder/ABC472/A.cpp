#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    for(auto c:s) cout << ((c == 'A') ? c : '.');
    
    return 0;
}