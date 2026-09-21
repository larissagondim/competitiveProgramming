// 1475A - Odd Divisor

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;	
		if(n == 1) cout << "NO" << endl;
		else {
			while (n % 2 == 0) n /= 2;
			cout << ((n == 1) ? "NO" : "YES") << '\n';
		}
 
    }

    return 0;
}
