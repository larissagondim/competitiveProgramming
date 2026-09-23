// Theatre Square

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ll n, m, a;
    cin >> n >> m >> a;

    ll side1 = n / a;
    ll side2 = m / a;

    if (n % a != 0) side1++;

    if (m % a != 0) side2++;
    
    cout << side1 * side2 << endl;

    return 0;
}
