#include <stdio.h>
 
int main() {
 
    float a, b, c, d;
    float media;
    float notafinal;
    float mediafinal;
    
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    media = ((a*2)+(b*3)+(c*4)+(d*1))/10.0;
    
    printf("Media: %.1f\n", media);
    
    if (media>=7)
        printf("Aluno aprovado.\n");
    else if ((media<7) && (media>=5)) {
        printf("Aluno em exame.\n");
        scanf("%f", &notafinal);
        printf("Nota do exame: %.1f\n", notafinal);
        mediafinal=(notafinal+media)/2;
        if (mediafinal>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", mediafinal);
    } else if (media<5)
        printf("Aluno reprovado.\n");
        
    return 0;
}