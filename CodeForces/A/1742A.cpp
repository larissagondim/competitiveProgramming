// 1742A - Sum
#include <bits/stdc++.h>
using namespace std;
#define TAM 3
#define pb push_back

int main(void) {
    int t;
    cin >> t;

    while(t--){
	vector<int> a(TAM);
	string res = "NO";
	for(int i = 0; i < TAM; i++) 
            cin >> a[i];

	if((a[0] == a[1] + a[2]) || (a[1] == a[0] + a[2]) || (a[2] == a[0] + a[1])) res = "YES";
	
	cout << res << endl;

    }
    return 0;
}
