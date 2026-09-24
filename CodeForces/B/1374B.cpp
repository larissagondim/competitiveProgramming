// Multiply by 2, divide by 6

#include <bits/stdc++.h>
using namespace std;

// type aliases for brevity
typedef long long ll;

// fast i/o
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    
    ll t;
    cin >> t;

    while(t--) {
        ll n; 
        cin >> n;
        
        ll moves = 0;
        ll fatores2 = 0;
        ll fatores3 = 0;

        while(n % 2 == 0) {
            n /= 2;
            fatores2 += 1;
        }
    
        while(n % 3 == 0) {
            n /= 3;
            fatores3 += 1;
        }

        if(n != 1) moves = -1;
        else if(fatores2 > fatores3) moves = -1;
        else moves = fatores3 + (fatores3 - fatores2);

        cout << moves << endl;
    }
    
    return 0;
}   