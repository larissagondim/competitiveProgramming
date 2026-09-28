
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
    cin >> n;

    vector<ll> a(n);
    ll soma = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        soma += a[i];
    }

    if(soma % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    ll target = soma / n;
    ll saldo = 0;
    ll res = 0;

    for(int i = 0; i < n - 1; i++) {
        saldo += (a[i] - target);

        if(saldo < 0) {
            cout << -1 << endl;
            return 0;         
        }

        res += saldo;

    }
    cout << res << endl;


}