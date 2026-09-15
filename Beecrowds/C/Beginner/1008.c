#include <stdio.h>
 
int main() {
 
    int n, wh;
    float ph;
    
    scanf("%d %d %f", &n, &wh, &ph);
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, (wh*ph));
 
    return 0;
}