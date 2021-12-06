#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TARRAY 10
/*
Tipo do pais com nome e população
tipo continente com nome, qtd paises e ponteiro para paises
funcao que cadastra pais
 funcao que cadasta continente e inclui paises
 funcao que ria uma string com o continente paises
 funcao que busca o pais mais população de um continente
 */

Pais cadastrarPais();
Continente cadastrarContinente();
char* strContinente(Continente);
Pais* maisPopuloso(Continente);
void main();

typedef struct pais{
    char *nome;
    int populacao;
} Pais;

typedef struct continente{
    char *nome;
    int qtdPaises;
    Pais* paises;
} Continente;

Pais cadastrarPais(){
    Pais p;
    p.nome = (char*) calloc(20, sizeof(char));
    printf("\nInforme o nome do pais: ");
    scanf(" %s", p.nome);
    printf("\nInforme a população do pais: ");
    scanf("%d", &p.populacao);
    return p;
}

Continente cadastrarContinente(){
    Continente c;
    c.nome = (char*) calloc(20, sizeof(char));
    printf("\nInforme o nome do continente: ");
    scanf(" %s", c.nome);
    printf("\nInforme a quantidade de paises: ");
    scanf("%d", &c.qtdPaises);
    c.paises = (Pais*) calloc(c.qtdPaises, sizeof(Pais));
    for(int i=0; i<c.qtdPaises;i++)
        c.paises[i] = cadastrarPais();
    return c;
}

char* strContinente(Continente c){
    char *str = (char*) calloc(100, sizeof(char));
    sprintf(str, "\n%s\n\tPaises:\n", c.nome);
    for(int i=0; i<c.qtdPaises; i++){
        sprintf(str, "%s\nNome: %s\nPop:%d\n", str, c.paises[i].nome, c.paises[i].populacao);
    }
}

Pais* maisPopuloso(Continente);

void main(){
    int res, qtdPais=0, qtdContinente=0;
    Continente continentes[5];
    Pais *mPopuloso;
    char *nomeContinente;

    while(1){
        printf("\n\n0 Sair");
        printf("\n1 Cadastrar continente");
        printf("\n2 Visualizar continente");
        printf("\n3 Pais mais populoso");
        scanf("%d", &res);

        switch(res){
            case 0:
            return;

            case 1:
                continentes[qtdContinente++] = cadastrarContinente();
            break;

            case 2:
                printf("Informe o nome do continente: ");
                scanf(" %s", nomeContinente);
                for(int i=0;i<qtdContinente;i++){
                    if(strcmp(continentes[i].nome, nomeContinente) == 0){
                        printf(strContinente(continentes[i]));
                        break;
                    }
                }
            break;

            case 3:
                printf("Informe o nome do continente: ");
                scanf(" %s", nomeContinente);
                for(int i=0;i<qtdContinente;i++){
                    if(strcmp(continentes[i].nome, nomeContinente) == 0){
                        mPopuloso = maisPopuloso(continentes[i]);
                        break;
                    }
                }
                printf("\nPais mais populoso: %s, com %d habitantes", mPopuloso->nome, mPopuloso->populacao);
            break;

            default:
                printf("\n\nOpção invalida!\n");

        }
    }
}
