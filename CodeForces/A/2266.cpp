#include <bits/stdc++.h>
using namespace std;

#define SIZE 3
int main(void) {

    int t;
    cin >> t;

    while(t--) {
	int n;
	cin >> n;

	vector<int> a(SIZE);
	int weak = 0;

	for(int i = 0; i < SIZE; i++) {
	    cin >> a[i];
	    weak = max(weak, n - a[i]);
	}
	cout << weak << endl;

    }
    return 0;
}
