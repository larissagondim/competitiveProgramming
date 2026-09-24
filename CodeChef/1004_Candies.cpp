#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq;
        bool possible = true;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] > 2) possible = false;  
        }

        cout << (possible ? "Yes" : "No") << endl;
    }

    return 0;
}
