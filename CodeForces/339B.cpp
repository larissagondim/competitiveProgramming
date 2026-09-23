#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INI 1

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    int curr = 1;
    ll tempo = 0;

    for(int i = 0; i < m; i++) {
	cin >> a[i];
	if(a[i] >= curr) tempo += (a[i] - curr);
	else tempo += (n - curr) + a[i];
	curr = a[i];
    }
    
    cout << tempo << endl;

    return 0;
}


