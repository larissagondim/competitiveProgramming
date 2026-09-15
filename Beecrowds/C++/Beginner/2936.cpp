#include <iostream>

using namespace std;

int main(void) {
    
    int cur, boi, bot, map, ia;
    int curP, boiP, botP, mapP, iaP;
    int total;
    
    cin>>cur>>boi>>bot>>map>>ia;
    
    curP = cur*300;
    boiP = boi*1500;
    botP = bot*600;
    mapP = map*1000;
    iaP = ia*150;
    
    total = curP + boiP + botP + mapP + iaP + 225;
    
    cout<<""<<total<<endl;
    
    return 0;
}