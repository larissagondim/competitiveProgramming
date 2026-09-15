#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
    float x1, y1;
    float x2, y2;
    float dist;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    
    cout << fixed << setprecision(4) << dist << endl;
    
    return 0;
}