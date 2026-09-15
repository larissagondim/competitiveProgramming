#include <stdio.h>
 
int main() {
 
    int n, x;
    
    scanf("%d %d", &n, &x);
    
    printf("%.2f\n", (double)x / (n + 2));
 
    return 0;
}