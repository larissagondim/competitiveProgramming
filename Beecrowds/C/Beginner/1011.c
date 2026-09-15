#include <stdio.h>
 
int main() {
 
    int R;
    double volume;
    
    scanf("%d", &R);
    
    volume = (4/3.0)*R*R*R*3.14159;
    
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}