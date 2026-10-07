#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        int sum1=0, sum2=0;
        for(int i = 0; i < s.size(); i++) {
            if(i < 3) sum1 += (s[i]) - '0';
            else sum2+=(s[i])-'0';
        }

        cout << ((sum1==sum2) ? "YES" : "NO") << endl;
    }
}