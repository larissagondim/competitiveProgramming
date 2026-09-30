// 1144A - Diverse Strings

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    const string alphabet = "abcdefghijklmnopqrstuvwxyz";

    while(n--) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        cout << ((alphabet.find(s) != string::npos) ? "Yes" : "No") << endl;
    }
    return 0;
}
