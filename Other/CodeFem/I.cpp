#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

const ll MOD = 122333221;

ll potencia(ll a, ll b) {
    ll res = 1;

    while(b) {
        if(b & 1)
            res = res * a % MOD;

        a = a * a % MOD;
        b /= 2;
    }

    return res;
}

ll combinatoria(int n, int k) {
    if(k > n - k)
        k = n - k;

    ll numerador = 1;
    ll denominador = 1;

    for(int i = 1; i <= k; i++) {
        numerador = numerador * (n - i + 1) % MOD;
        denominador = denominador * i % MOD;
    } 

    ll inv = potencia(denominador, MOD - 2);
    return numerador * inv % MOD;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;
        
        cout << combinatoria(n, k) << endl;
    }

    return 0;
}
// ambas tem que usar tudo que compraram
// tem que usar ingredientes diferentes (xor ? )
// irma so pode comprar k ingredientes (entao provavelmente alejandra tem n-k ingredientes)

// n -> numero de ingredientes
// k -> irma vai comprar
// modulo 122333221