#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > 0)
            freq[a[i]]++;
    }
    cout<<freq.size()<<endl;
}