#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    char conceito[2];
    float trabalho, avaliacao, exame, media;

    printf("Nota do trabalho: ");
    scanf("%f", &trabalho);
    printf("Nota da avalia��o: ");
    scanf("%f", &avaliacao);
    printf("Nota do exame final: ");
    scanf("%f", &exame);

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 2 + 3 + 5;
}
