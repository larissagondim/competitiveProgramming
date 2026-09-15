#include <stdio.h>
 
int main() {
 
    int r1, r2;
    int teste, testen;
    
    scanf("%d", &testen);
    
    for(teste=0; teste<testen; teste++) {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", (r1+r2));
    }
 
    return 0;
}