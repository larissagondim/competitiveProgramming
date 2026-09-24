#include <bits/stdc++.h>
using namespace std;

int main(void) {

    int t;
    cin >> t;

    while(t--) {
        int n, tot = 0;
        cin >> n;

        for(int i = 0; i < n; i++) {
            int b;
            cin >> b;
            tot += b;
        }

        cout << ((tot % 2 == 0) ? "YES" : "NO" ) << endl;

    }
    return 0;
}
