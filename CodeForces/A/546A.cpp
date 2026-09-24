#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(void) {
    int k, w;
    ll n;

    cin >> k >> n >> w;

    int tot = 0; 

    for(ll i = 1; i <= w; i++) 
	tot += (i*k); 

    cout << ((n - tot < 0) ? abs(n-tot) : 0) << endl;
    return 0;
}
