#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool ans = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char curr; cin >> curr;
            if(!(curr == 'B' || curr == 'W' || curr == 'G')) ans = true;
        }
    }

    cout << ((ans) ? "#Color" : "#Black&White") << endl;
    
    return 0;
}