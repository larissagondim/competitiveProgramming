#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int time, speed;
    
    if (cin >> time >> speed) {
        double distance = (double)time * speed;
        double liters = distance / 12.0;
        cout << fixed << setprecision(3) << liters << endl;
    }
    
    return 0;
}