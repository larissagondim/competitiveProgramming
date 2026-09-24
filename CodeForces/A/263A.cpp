#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TAM 5
#define MID 2

int main(void) {
    vector<vector<int>> m(TAM, vector<int>(TAM)); 

    ll index = 0;
    ll s_index = 0;

    for(int i = 0; i < TAM; i++) {
	for(int j = 0; j < TAM; j++) {
	    cin >> m[i][j];
	    if(m[i][j] == 1) {
		index = i;
		s_index = j;
		break;
	    } 
	}
    }

    ll moves = abs(MID - index) + abs(MID - s_index);

    cout << moves << endl;
    
    return 0;
}
