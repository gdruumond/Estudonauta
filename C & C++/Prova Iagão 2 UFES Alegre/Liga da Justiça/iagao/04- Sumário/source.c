// Grupo Liga da Justiça
// Iago Gravel do Nascimento
// Pedro Tardin dos Santos Jacinto
// Entradas para teste do programa: 10 capitulos e 2 seções; 2 capitulos e 10 seções; 0 capitulos e 0 seções.

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int c, i, capitulos, secoes;

    printf("Digite o número de capítulos: ");
    scanf("%i", &capitulos);
    printf("Digite o número de seções de cada capítulo: ");
    scanf("%i", &secoes);

    for(c=0; c<capitulos; c++){
        printf("\nCapítulo %i", c+1);
        for(i=0; i<secoes; i++){
            printf("\n.     Seção %i", i+1);
        }
        printf("\n");
    }
}
