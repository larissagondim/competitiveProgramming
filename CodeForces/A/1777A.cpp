// 1777A - Everybody Likes Good Arrays!

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(void) {
    int t; cin >> t;

    while(t--) {
        int n, i, temp; cin >> n;
        vi a(n);

        for(i = 0; i < n; i++) 
            cin >> a[i];

        int op = 0;

        for(i = 0; i < n - 1; i++) {
            if(a[i] % 2 == a[i+1] % 2) {
                temp = a[i] * a[i+1];
                a[i] = temp;
                op++;
            }
        }

        cout << op << endl;

    }


    return 0;
}