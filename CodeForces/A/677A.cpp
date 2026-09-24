#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// fast i/o
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    
    int n, h;
    cin >> n >> h;

    ll w = 0;

    while(n--) {
        ll hi;
        cin >> hi;
        
        if(hi > h) w += 2;
        else w += 1;
    }
    
    cout << w << endl;
    return 0;
}   