#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTAM 20
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
    fflush(stdin);
    gets(elemento->nome);
    printf("\tSimbolo: ");
    fflush(stdin);
    gets(elemento->simbolo);
    printf("\tNumero: ");
    scanf("%d", &elemento->numero);
}

// 03.
void imprimeElementos(Elemento elemento[], int qtdElementos){
    for(int i =0; i<qtdElementos; i++){
        printf("\n\nElemento %d", i+1);
        printf("\n\tNome: %s", elemento[i].nome);
        printf("\n\tSimbolo: %s", elemento[i].simbolo);
        printf("\n\tNumero: %d", elemento[i].numero);
    }
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

    for(int i=0; i<tamVetores;i++)
        sprintf(string, "%s%d", elemento[i].simbolo, qtdElementos[i]);
    strcat(string, "\0");

    return string;
}

// 06.
void main(){
    Elemento elemento[TAMRRAY];
    char *strElementos, *nomeElemento = (char*) calloc(MAXTAM, sizeof(char));
    int qtdDoElemento[TAMRRAY], qtdElementos = 0;


    for(int i=0; i<TAMRRAY;i++){
        cadastraElemento(elemento + i);
        qtdElementos++;
    }
    
    imprimeElementos(elemento, qtdElementos);
    
    printf("\n\n");
    for(int i=0; i<TAMRRAY;i++){
        printf("Quantidade de %s: ", elemento[i].nome);
        scanf("%d", &qtdDoElemento[i]);
    }

    strElementos = stringElementoComposto(elemento, qtdDoElemento, TAMRRAY);

    printf("\nElemento formado: %s", strElementos);

    printf("\n\nInforme o nome de um elemento: ");
    scanf(" %s", nomeElemento);

    if(elementoNoArray(elemento, qtdElementos, nomeElemento))
        printf("\nElemento encontrado no array");
    else
        printf("\nElemento NAO encontrado no array");
    
}