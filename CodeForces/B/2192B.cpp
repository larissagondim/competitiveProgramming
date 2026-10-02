#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        vi ones, zeros;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') ones.pb(i+1);
            else zeros.pb(i+1);
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(true) continue;
            }
        }
    }


    return 0;
}