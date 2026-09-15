#include <stdio.h>
 
int main() {
 
    int i, teste;
    scanf("%d", &teste);
    
    for(i=1; i<=teste; i++) {
        if(i==teste) printf("Ho!\n");
        else printf("Ho ");
    }
 
    return 0;
}