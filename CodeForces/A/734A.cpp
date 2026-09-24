#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0, danik = 0;

    for(int i = 0; i < n; i++) {
	if(s[i] == 'A') anton++;
	else danik++;
    }

    if(anton == danik) cout << "Friendship";
    else cout << ((anton > danik) ? "Anton" : "Danik");
    return 0;
}
