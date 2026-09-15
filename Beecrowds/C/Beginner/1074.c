#include <stdio.h>
 
int main() {
 
    int teste, testen, numb;
    
    scanf("%d", &testen);
    
    for(teste=0; teste<testen; teste++) {
        scanf("%d", &numb);
        
        if((numb%2==0) && (numb>0)) {
            printf("EVEN POSITIVE\n");
        } else if((numb%2==0) && (numb<0)) {
            printf("EVEN NEGATIVE\n");
        } else if((numb%2!=0) && (numb>0)) {
            printf("ODD POSITIVE\n");
        } else if((numb%2!=0) && (numb<0)) {
            printf("ODD NEGATIVE\n");
        } else if (numb==0) {
            printf("NULL\n");
        }
    }
 
    return 0;
}