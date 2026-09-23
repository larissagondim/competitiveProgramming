#include <bits/stdc++.h>
using namespace std;
typedef unsigned char uc;
int main(void) {
    int n;
    cin >> n;
    string mode = "EASY";

    while(n--) {
	uc a;
	cin >> a;
	if(a == '1') mode = "HARD";
    }

    cout << mode << endl;
    return 0;
}
