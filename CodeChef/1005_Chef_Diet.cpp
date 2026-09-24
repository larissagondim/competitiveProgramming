#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        vi a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int tot = 0, day = 0;
        string ans = "YES";
        for(int i = 0; i < n; i++) {
            tot += (a[i] - k);
            if(tot < 0) {
                ans = "NO";
                day = (i+1);
                break;
            }
        }

        cout << ans;
        if(tot < 0) cout << " " << day;
        cout << endl;
    }

    return 0;
}
