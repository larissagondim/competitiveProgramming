#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >>t;
    while(t--) {
        int rating, div; cin >> rating;
        if(rating <=1399) 
            div = 4;
        else if(rating >=1400 && rating <=1599)
            div = 3;
        else if(rating >=1600 && rating <=1899)
            div = 2;
        else  
            div = 1;
        cout << "Division " << div << endl;
    }
}