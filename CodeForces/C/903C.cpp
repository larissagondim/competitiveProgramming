#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vll boxes(n);
    for (int i = 0; i < n; i++) cin >> boxes[i];

    sort(boxes.begin(), boxes.end());

    int ans = 1;
    int cnt = 1;

    for (int i = 1; i < n; i++) {
        if (boxes[i] == boxes[i - 1]) cnt++;
        else cnt = 1;

        ans = max(ans, cnt);
    }

    cout << ans << '\n';

    return 0;
}
