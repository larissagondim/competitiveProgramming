#include <stdio.h>
#include <string.h>

int main(void) {
    int teste;
    char entrada[4]; 
    int i;
    char primeiro, letra, segundo;

    int num_primeiro, num_segundo;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++) {
        scanf("%s", entrada);

        primeiro = entrada[0]; 
        letra = entrada[1];    
        segundo = entrada[2];  

        num_primeiro = primeiro - '0';
        num_segundo = segundo - '0'; 

       if(num_primeiro == num_segundo) {
        
       }
    }

    return 0;
}