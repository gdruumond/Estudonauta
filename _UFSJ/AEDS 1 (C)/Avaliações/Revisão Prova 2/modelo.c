#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTAM 50
#define TAMRRAY 3

// 01.
typedef struct{
    char *nome;
    char *simbolo;
    int numero;
} Elemento;

// 02.
void cadastraElemento(Elemento *elemento){
    elemento->nome = (char*)calloc(MAXTAM, sizeof(char));
    elemento->simbolo = (char*)calloc(MAXTAM, sizeof(char));
    printf("\nDigite os dado do elemento: ");
    printf("\n\tNome: ");
    scanf(" %s", elemento->nome);
    printf("\tSimbolo: ");
    scanf(" %s", elemento->simbolo);
    printf("\tNumero: ");
    scanf("%d", &elemento->numero);
}

// 03.
void imprimeElementos(Elemento elemento[], int qtdElementos){
    if(qtdElementos < 0) return;

    printf("\n\nElemento %d", qtdElementos+1);
    printf("\n\tNome: %s", elemento[qtdElementos].nome);
    printf("\n\tSimbolo: %s", elemento[qtdElementos].simbolo);
    printf("\n\tNumero: %d", elemento[qtdElementos].numero);

    return imprimeElementos(elemento, qtdElementos-1);
}

// 04.
int elementoNoArray(Elemento elemento[], int qtdElementos, char *nome){
    for(int i=0; i<qtdElementos; i++)
        if(strcmp(elemento[i].nome, nome) == 0)
            return 1;

    return 0; 
}

 // 05.
char* stringElementoComposto(Elemento elemento[], int qtdElementos[], int tamVetores){
    char *string = (char*)calloc(MAXTAM, sizeof(char));
    strcpy(string, "\0");
    for(int i=0; i<tamVetores;i++)
        sprintf(string, "%s%s%d", string, elemento[i].simbolo, qtdElementos[i]);

    return string;
}

// 06.
void main(){
    Elemento elemento[TAMRRAY];
    char *nomeElemento = (char*) calloc(MAXTAM, sizeof(char));
    int qtdDoElemento[TAMRRAY], qtdElementos = 0;


    for(int i=0; i<TAMRRAY;i++){
        cadastraElemento(elemento + i);
        qtdElementos++;
    }
    
    imprimeElementos(elemento, qtdElementos-1);
    
    printf("\n\n");
    for(int i=0; i<TAMRRAY;i++){
        printf("Quantidade de %s: ", elemento[i].nome);
        scanf("%d", &qtdDoElemento[i]);
    }

    printf("\nElemento formado: %s", stringElementoComposto(elemento, qtdDoElemento, TAMRRAY));

    printf("\n\nInforme o nome de um elemento: ");
    scanf(" %s", nomeElemento);

    if(elementoNoArray(elemento, qtdElementos, nomeElemento))
        printf("\nElemento encontrado no array");
    else
        printf("\nElemento NAO encontrado no array");
    
}