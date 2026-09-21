#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll n;
    cin >> n;
    cout << n << " ";
    while(n != 1) {
        if(n == 1) {
            cout << n;
            break;
        }
        else if(n % 2 == 0) {
            n /= 2;
            cout << n;
        }
        else if(n % 2 != 0) {
            n = n*3 + 1;
            cout << n;
        }
        cout << " ";
    }
    return 0;
}
