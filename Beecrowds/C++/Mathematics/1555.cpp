#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    int x, y;
    for(int i=0; i<t; i++){
        cin >> x >> y;
	int beto = (2*x*x + 5*5*y*y);
	int carlos = (-100*x + y*y*y);
	int rafael = (3*x*3*x) + y*y;
    	if(beto>carlos && beto>rafael) cout << "Beto ganhou" << endl;
	else if(carlos > beto && carlos > rafael) cout << "Carlos ganhou" << endl;
	else cout << "Rafael ganhou" << endl;
    }
    return 0;
}
