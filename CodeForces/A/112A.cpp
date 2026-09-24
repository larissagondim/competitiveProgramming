#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s1, s2; 
    cin >> s1;
    cin >> s2;

    int s = s1.size();
    // convert all to lowercase :)
    
    for(int i = 0; i < s; i++) {
        if(s1[i] >= 65 && s1[i] <= 90) s1[i] += 32;
	    if(s2[i] >= 65 && s2[i] <= 90) s2[i] += 32;
    }

    int diff = 0;

    for(int i = 0; i < s; i++) {
        if(s1[i] > s2[i]) {
            diff = 1;
            break;
        }
        if(s1[i] < s2[i]) {
            diff = -1;
            break;
        }
    }

    cout << diff << endl;

    return 0;
}
