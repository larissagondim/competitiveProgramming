#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    string s;
    cin >> s;

    ll large = 1, curr = 1, size = s.size();

    for(ll i = 1; i < size; i++) {
        if(s[i-1] == s[i]) {
            curr++;
            if(large < curr) large = curr;
        } else {
            if(curr > large) large = curr;
            curr = 1;
        }
    }
    cout << large << endl;
}