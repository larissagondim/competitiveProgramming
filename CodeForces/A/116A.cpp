#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, max = 0, curr = 0;
    cin >> n;
    
    while(n--) {
	int a, b;
	cin >> a >> b;
	curr += (b - a);
	if(curr > max) max = curr;
    }

    cout << max << endl;
    return 0;
}
