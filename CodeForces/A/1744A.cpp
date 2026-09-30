#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(void) {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        
        vi a(n);
        for(int i = 0;i < n; i++) 
            cin >> a[i];

        string s; cin >> s;

        map<int, char> mp;
        bool ok = true;

        for(int i = 0; i < n; i++) {
            if(mp.count(a[i]) == 0)    
                mp[a[i]] = s[i];
            else if(mp[a[i]] != s[i]) {
                ok = false;
                break;
            }

        }
        
        cout << (ok ? "YES" : "NO") << endl;
    }


    return 0;
}