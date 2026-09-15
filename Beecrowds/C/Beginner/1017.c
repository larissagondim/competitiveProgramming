#include <stdio.h>
 
int main() {
 
    int duration, speed;
    float liters;
    scanf("%d %d", &duration, &speed);
    
    liters=(duration*speed)/12.0;
    
    printf("%.3f\n", liters);
 
    return 0;
}