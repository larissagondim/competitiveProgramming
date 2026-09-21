#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll n;
    cin >> n;
    ll tot = (n * (n+1))/2;
    n = n - 1;

    ll sum = 0;
    while(n--) {
        ll a;
        cin >> a;
        sum += a;
    }

    cout << tot - sum << endl;
    
    return 0;
}