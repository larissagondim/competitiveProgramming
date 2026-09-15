// 546A - Soldier and Bananas
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll k, n, w;
    cin >> k >> n >> w;
	
    ll value = 0;
    
    for(int i = 1; i <= w; i++) {
	value += (k * i);
    } 

    if((value - n) < 0) cout << 0 << endl;
    else cout << value-n  << endl;
    return 0;
}
