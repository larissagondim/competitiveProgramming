// 977B - Two-gram

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s, sub;
    cin >> s;

    map<string, int> bigramFreq;
    for (int i = 0; i < n - 1; i++) {
        sub = s.substr(i, 2);
        bigramFreq[sub]++;
    }

    map<string, int>::iterator it;

    int maior = -1;
    string ans;
    for(it = bigramFreq.begin(); it != bigramFreq.end(); it++) 
        if((*it).second > maior) {
            maior = (*it).second;
            ans = (*it).first;
        }

    cout << ans << endl;
    

    return 0;
}
