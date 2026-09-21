#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int res = 0;
    while(n--) {
        int m, c;
        cin >> m >> c;

        if(m - c > 0) res += 1;
        else if(m - c < 0) res -= 1;
    }

    if(res == 0) cout << "Friendship is magic!^^" << endl;
    else cout << ((res > 0) ? "Mishka" : "Chris") << endl;	
    
}
