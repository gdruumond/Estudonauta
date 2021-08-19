// Grupo Liga da Justiça
// Iago Gravel do Nascimento
// Pedro Tardin dos Santos Jacinto
// Entradas para teste do programa: 2; 12; 33.

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    // c, i e j são contadores de repetição
    int c, i, j, linhas;

    printf("Digite o número de linhas da árvore à ser desenhada: ");
    scanf("%i", &linhas);

    for(c=0; c<=linhas; c++){
        for(i=0; i<j; i++){
            printf("*");
        }
        j++;
        printf("\n");
    }
}
