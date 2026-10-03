// 486A - Calculating Function
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(void) {
    ll n, i, sum = 0;
    cin >> n;
 
    cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2);
 
    return 0;
}