#include <stdio.h>
 
int main() {
 
    int teste, i;
    char *pergunta;
    
    scanf("%d", &teste);
    
    for(i=0; i<teste; i++) {
        scanf("%s", pergunta);
        printf("I am Toorg!\n");
    }
 
    return 0;
}