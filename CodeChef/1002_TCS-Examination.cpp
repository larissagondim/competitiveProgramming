#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;

    while(t--) {
	
	int ddsa, dtoc, ddm;
	cin >> ddsa >> dtoc >> ddm;

	int dragon = ddsa + dtoc + ddm;

	int sdsa, stoc, sdm;
	cin >> sdsa >> stoc >> sdm;

	int sloth = sdsa + stoc + sdm;

	string winner;
        
	if(dragon > sloth) winner = "DRAGON";
	else if(sloth > dragon) winner = "SLOTH";
	else {
	    if(ddsa > sdsa) winner = "DRAGON";
	    else if(sdsa > ddsa) winner = "SLOTH";
	    else if(dtoc > stoc) winner = "DRAGON";
	    else if(stoc > dtoc) winner = "SLOTH";
	    else winner = "TIE";
	}
	cout << winner << endl;
    }	

    return 0;
}
