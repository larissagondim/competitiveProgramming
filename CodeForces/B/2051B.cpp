// 2051B - Journey

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll cycle = a + b + c;

        ll full = n / cycle;
        ll sum = full * cycle;
        ll day = full * 3;

        if (sum >= n) {
            cout << day << '\n';
            continue;
        }

        if (sum + a >= n) {
            cout << day + 1 << '\n';
        }
        else if (sum + a + b >= n) {
            cout << day + 2 << '\n';
        }
        else {
            cout << day + 3 << '\n';
        }
    }

    return 0;
}
