#include <stdio.h>
#include <string.h>
 
int main() {
 
    char palavrao[20];
    
    fgets(palavrao, 20, stdin);
    
    if(strlen(palavrao) > 10) printf("palavrao\n");
    else printf("palavrinha\n");
 
    return 0;
}