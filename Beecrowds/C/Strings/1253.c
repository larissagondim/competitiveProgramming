#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void Encriptar(char *Palavra, int Chave) {
    int tamanho = strlen(Palavra);
    for(int j=0; j<tamanho; j++) {
        char novo_char = Palavra[j] - Chave;
        if(novo_char < 'A') {
            novo_char += 26;
        }
        Palavra[j] = novo_char;
    }
}

int main(void) {
    int teste, i;
    int chave;
    char palavra[52];
    scanf("%d", &teste);
    getchar(); // limpa '\n' do buffer

    for(i=0; i<teste; i++) {
        fgets(palavra, 52, stdin);
        palavra[strcspn(palavra, "\n")] = '\0'; //tira o '\n'

        scanf("%d", &chave);
        getchar(); // limpa '\n' do buffer

        Encriptar(palavra, chave);
        printf("%s\n", palavra);
    }


    return 0;
}