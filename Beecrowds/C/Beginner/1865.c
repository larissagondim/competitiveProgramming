#include <stdio.h>
#include <string.h>
 
int main() {
 
    int i, teste, forca;
    char nome[50];
    
    scanf("%d", &teste);
    
    for(i=0; i<teste; i++) {
        scanf("%s %d", nome, &forca);
        if(strcmp(nome, "Thor") == 0) printf("Y\n");
        else printf("N\n");
    }
 
    return 0;
}