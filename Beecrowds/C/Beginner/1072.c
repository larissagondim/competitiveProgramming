#include <stdio.h>
 
int main() {
 
    int teste, testen, x, in, out;
    int contador=0;
    int contador2=0;
    
    scanf("%d", &testen);
    
    for(teste=0; teste<testen; teste++) {
        scanf("%d", &x);
        if((x>=10) && (x<=20)) contador++;
        else contador2++;
    }
    printf("%d in\n", contador);
    printf("%d out\n", contador2);
 
    return 0;
}