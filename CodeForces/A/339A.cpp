// 339A - Helpful Maths
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    string temp;

    for(int i = 0; i < s.size(); i += 2) {
	temp += s[i];
    }

    sort(temp.begin(), temp.end());
    
    int index = 0;

    for(int i = 0; i < s.size(); i++) {    
        if(i%2==0) {
	    cout << temp[index];
	    index++;
	}	
	else cout << "+";
    }
    return 0;
}
