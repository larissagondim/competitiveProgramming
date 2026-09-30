#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> freq;

    for (auto& c : s) {
        c = tolower(static_cast<unsigned char>(c));
        freq[c]++;
    }

    cout << ((freq.size() == 26) ? "YES" : "NO") << endl;
    
    return 0;
}   
