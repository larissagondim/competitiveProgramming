#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

bool hasDistinct(int number) {
    if (number < 0) number = -number;

    while(number > 0) {
	int currDigit = number % 10;
	int remaining = number / 10;
	while(remaining > 0) {
	    if(remaining % 10 == currDigit) return false;
	    remaining /=10;
	}
	number /=10;

    }
    return true;
}
int main(void) {
    int y;
    cin >> y;

    do {
        y++;
    } while (!hasDistinct(y));

    cout << y << endl;
    return 0;
}
