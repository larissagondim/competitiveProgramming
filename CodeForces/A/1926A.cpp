#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int a =0, b=0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'A') a++;
            else b++;
        }
        cout << ((a>b) ? "A" : "B") << endl;
    }
    return 0;
}