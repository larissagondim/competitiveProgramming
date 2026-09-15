// bit++
#include <bits/stdc++.h>
using namespace std;


int main() {
    string op;
    int n, x(0);
    cin >> n;
    
    while(n--) {

        cin >> op;
        if(op[1] == '+') x++;
        else x--;

    }
    cout << x << endl;
    return 0;
}   