// 1374C - Move Brackets

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
	cin >> n;

	string s;
	cin >> s;
	
	// balance means that there's 1 '(' open
	// ans means that there's a ')' without a '('
	int balance = 0, ans = 0;
	for(int i = 0; i < n; i++) {
            if(s[i] == '(') balance++;	
	    else {
		if(balance > 0) balance--;
		else if(balance == 0) ans++;
	    }
	}
	cout << ans << endl;
	
    } 

    return 0;
}
