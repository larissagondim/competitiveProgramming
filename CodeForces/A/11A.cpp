// 11A - Increasing Sequence

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vi;

int main() {
    int n, d, i, j, moves = 0;
    cin >> n >> d;

    vi b(n);

    for(i = 0; i < n; i++)
        cin >> b[i];

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(b[j] <= b[i]) {
                int k = (b[i] - b[j]) / d + 1;
                b[j] += k * d;
                moves += (k); 
            }
        }
    }

    cout << moves << endl;

    return 0;
}
