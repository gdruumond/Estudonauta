#include<stdio.h>

void main(){
    char sigla[3][3];
    int populacao[3], estrela[3], maior;

    // Siglas dos paises
    for(int i = 0; i<3; i++){
        printf("Sigla do %do pais: ", i+1);
        for(int j=0; j<3; j++)
            scanf(" %c", &sigla[i][j]);
    }

    // População dos paises
    for(int i = 0; i<3; i++){
        printf("Populacao do %do pais (em dezena de milhoes): \n", i+1);
        scanf("%d", &populacao[i]);
        estrela[i] = populacao[i] / 10;
    }

    // Maior pais
    for(int i = 0; i<3; i++){
        if (i==0) maior = populacao[i];
        else if(populacao[i] > maior) maior = estrela[i];
    }

    // Escreve siglas
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++)
            printf("%c", sigla[i][j]);
        printf("\t");
    }
    printf("\n");
    // Escreve tabela WHILE(quantidade de linhas) FOR(passa pelas colunas) IF(diz se receberá * ou não)
    while(maior-- > 0){
        for(int i=0; i<3; i++){
            if(estrela[i]-- > 0)
                printf(" *");
            printf("\t");
        }
        printf("\n");
    }
}