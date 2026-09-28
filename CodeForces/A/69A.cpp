#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x, xt=0, y, yt=0, z, zt=0;
    while(n--) {

        cin >> x >> y >> z;
        xt+=x;
        yt+=y;
        zt+=z;
    }
    cout << ((xt==0 && yt==0 && zt==0) ? "YES" : "NO") << endl;
    
    return 0;
}