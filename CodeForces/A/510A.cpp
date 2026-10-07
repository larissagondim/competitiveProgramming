#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i=0;
    cin >> n >> m;

    while(n--) {
        if(i%2==0) {
            for(int j = 0; j < m; j++)
                cout << "#";
        }
        else if((i+1)%2==0&&(i+1)%4!=0) {
            for(int j = 0; j < m; j++) {
                if(j == m-1) cout << '#';
                else cout << '.';
            }
        }
        else {
            for(int j = 0; j < m; j++) {
                if(j == 0) cout << '#';
                else cout << '.';
            }

        }
        cout << endl;
        i++;
    }

    return 0;
}