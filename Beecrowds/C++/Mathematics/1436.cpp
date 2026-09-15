#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    for(int i=0; i<t; i++) {
        int n, p; cin >> n;
	vector<int> v(n);
	for(int j=0; j<n; j++) cin >> v[j];
	sort(v.begin(), v.end());
	int capitao = v[n/2];
	cout << "Case " << i+1 << ": " << capitao << endl;
    }
    return 0;
}
