#include <bits/stdc++.h>

using namespace std;

// fast i/o
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    string s;
    cin >> s;
    
    string temp = s;

    unordered_map<char, int> m;

    for(unsigned char i = 0; i < s.length(); i++) m[s[i]]++;

    unsigned char size = m.size();
    cout << ((size % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
}   