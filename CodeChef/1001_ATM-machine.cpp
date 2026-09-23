#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
		int n, k;
		cin >> n >> k;

		string ans = "";
		for(int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if(k - a >= 0) {
				k -= a;
				ans += '1';
			}
			else ans += '0';
		}
		cout << ans << endl;

    }
    return 0;
}
