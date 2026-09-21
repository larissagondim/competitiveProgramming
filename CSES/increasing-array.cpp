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
    
    ll n;
    cin >> n;
    ll op = 0;
    vector<ll> x(n);

    for(ll i = 0; i < n; i++) cin >> x[i];
    for(ll i = 1; i < n; i++) {
        if(x[i] < x[i-1]) {
            ll diff = (x[i-1] - x[i]);
            x[i] += diff;
            op += diff;
        }
    }
    cout << op << endl;

    return 0;
}   