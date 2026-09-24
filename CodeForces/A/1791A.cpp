// 1791A - Codeforces Checking
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
	char c;
	cin >> c;
	cout << ((c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's') ? "YES" : "NO") << endl;
    }
    return 0;

}
