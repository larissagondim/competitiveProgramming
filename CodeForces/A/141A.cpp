// 141A - Amusing Joke

#include <bits/stdc++.h>
using namespace std;

int main() {
    string name, host, door;
    cin >> name;
    cin >> host;
    cin >> door;

    string letters = name + host;
    sort(letters.begin(), letters.end());
    sort(door.begin(), door.end());

    cout << ((letters == door) ? "YES" : "NO") << endl;
    return 0;
}
