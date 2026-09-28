#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll b;

    cin >> n >> b;

    vector<int> a(n);

    ll soma = 0, esq = 0, res = 0;

    for(int dir = 0; dir < n; dir++) {
        cin >> a[dir];
        soma += a[dir];

        while(soma > b) {
            soma -= a[esq];
            esq++;
        }

        res = max(res, dir - esq + 1);

    }

    cout << res << endl;
    return 0;
    
}