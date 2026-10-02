// 1996A - Legs

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t; cin >> t;

    while(t--) {
        int n, i, animals = 0; cin >> n;

        while(n != 0) {
            if(n == 0)
                break; 
            if(n % 4 == 0) 
                n -= 4;
            else if(n % 2 == 0) 
                 n -= 2;
            else if(n > 4) 
                n -= 4;
            else if(n > 2) 
                n -= 2;
            animals++;
        }

        cout << animals << endl;

    }

    return 0;
}