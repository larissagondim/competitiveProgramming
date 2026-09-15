#include <stdio.h>
 
int main() {
 
    int ca, ba, pa;
    int cr, br, pr;
    int c, b, p;
    int total;
    
    scanf("%d %d %d", &ca, &ba, &pa);
    scanf("%d %d %d", &cr, &br, &pr);
    
    c = cr-ca;
    if (c<0) c=0;
    b = br-ba;
    if (b<0) b=0;
    p = pr-pa;
    if (p<0) p=0;

    total = c+b+p;
    
    printf("%d\n", total);
    
    return 0;
}