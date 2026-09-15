#include <iostream>
using namespace std;

int main() {
    int n = 0, caseNumber = 1; 
    while(n != -1) {
        cin >> n;
        if(n == -1) break;
        int c = n/2;
        cout << "Experiment " << caseNumber 
             << ": " << c 
             << " full cycle(s)" << endl;
        caseNumber++;
    }
    return 0;
}