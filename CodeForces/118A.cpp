#include <bits/stdc++.h>

using namespace std;

#define pb push_back

bool ehvogal(char c) {
    string vogais = "aeiouyAEIOUY";
    return vogais.find(c) != string::npos;
}

int main() {
    string s;

    cin >> s;

    string out;

    for (int i = 0; i < s.length(); i++) {
        if (!ehvogal(s[i])) {
            out += '.';
	        out += tolower(s[i]);
        }
    }

    cout << out << endl;

    return 0;
}
