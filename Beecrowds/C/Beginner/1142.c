#include <stdio.h>
 
int main() {
 
    int n;
    int a=1;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        printf("%d %d %d PUM\n", a, a+1, a+2);
        a += 4;
    }
 
    return 0;
}