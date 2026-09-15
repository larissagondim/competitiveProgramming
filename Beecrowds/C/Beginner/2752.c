#include <stdio.h>
 
int main() {
 
    char variavel[50] = "AMO FAZER EXERCICIO NO URI";
    
    printf("<%s>\n", variavel);
    printf("<%30s>\n", variavel);
    printf("<%.20s>\n", variavel);
    printf("<%-20s>\n", variavel);
    printf("<%-30s>\n", variavel);
    printf("<%.30s>\n", variavel);
    printf("<%30.20s>\n", variavel);
    printf("<%-30.20s>\n", variavel);
    
    return 0;
}