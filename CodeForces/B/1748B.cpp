#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int freq[10] = {};
            int distinct = 0;
            int maxFreq = 0;

            // uma substring com tamanho > 100 nunca será diversa
            for (int j = i; j < n && j < i + 100; j++) {
                int digit = s[j] - '0';

                if (freq[digit] == 0)
                    distinct++;

                freq[digit]++;
                maxFreq = max(maxFreq, freq[digit]);

                if (maxFreq <= distinct)
                    ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
