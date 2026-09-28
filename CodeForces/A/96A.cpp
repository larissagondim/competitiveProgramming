#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int consecutive=1, max=0;

    string ans = "NO";
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) consecutive++;
        if(consecutive>max) max = consecutive;
        if(max>6) {
            ans="YES";
            break;
        }
        if(s[i] != s[i-1]) consecutive=1;
    }

    cout << ans;
    
    return 0;
}