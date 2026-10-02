// 1778A - Flip Flop Sum
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;


int main(void) {
    int t; cin >> t;

    while(t--) {
        int sum = 0, n; cin >> n;
        vi a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        bool hasMinusMinus=false, HasPlusPlus=false, HasPlusMinus=false;
        
        for(int i = 0; i < n-1; i++) {
            if(a[i] == -1 && a[i+1] == -1)
                hasMinusMinus = true;
            else if(a[i] == 1 && a[i+1] == 1)
                HasPlusPlus = true;
            else
                HasPlusMinus = true;
        }

        if(hasMinusMinus)
            sum+=4;
        else if(HasPlusPlus && !HasPlusMinus) 
            sum-=4;
        
        cout << sum << endl;
    }

    return 0;
}