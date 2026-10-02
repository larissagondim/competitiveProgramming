// 1703B - ICPC Balloons

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(void) {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        map<char, int> balloons;

        for(char c : s)
            balloons[c]++;

        int score = 0;
        set<char> unique(s.begin(), s.end());

        for(char c : unique) {
            if(balloons[c] == 1)
                score += 2;
            else if(balloons[c] > 1)
                score += (2 + (balloons[c] - 1));
        }

        cout << score << endl;
    }


    return 0;
}