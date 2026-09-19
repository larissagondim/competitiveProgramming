#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while(t--){

        ll n, k;
        cin >> n >> k;
        ll res = (n/k) + (n % k != 0);

        if(res < 3)
           res = 0;
        
        cout << res << endl;
    }
    return 0;
    
}