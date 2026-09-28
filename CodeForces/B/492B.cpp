// 492B - Vanya and Lanterns

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
typedef vector<ll> vll;

int main() {
    int n; 
    ll l;
    cin >> n >> l;

    vll a(n);

    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    sort(a.begin(), a.end());
    return 0;
}
