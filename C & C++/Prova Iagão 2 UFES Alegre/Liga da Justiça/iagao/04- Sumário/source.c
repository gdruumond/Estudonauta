// Grupo Liga da Justi�a
// Iago Gravel do Nascimento
// Pedro Tardin dos Santos Jacinto
// Entradas para teste do programa: 10 capitulos e 2 se��es; 2 capitulos e 10 se��es; 0 capitulos e 0 se��es.

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    int c, i, capitulos, secoes;

    printf("Digite o n�mero de cap�tulos: ");
    scanf("%i", &capitulos);
    printf("Digite o n�mero de se��es de cada cap�tulo: ");
    scanf("%i", &secoes);

    for(c=0; c<capitulos; c++){
        printf("\nCap�tulo %i", c+1);
        for(i=0; i<secoes; i++){
            printf("\n.     Se��o %i", i+1);
        }
        printf("\n");
    }
}
