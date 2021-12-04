#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Crie um registro chamado Nodo, que contém um inteiro e um ponteiro para outro Nodo. Faça um programa em que o usuário é capaz de escolher entre: 1) criar um nodo;  2) apagar um nodo; 3) imprimir os valores de todos os nodos; 4) sair do programa. O programa deve iniciar com uma variável cujo tipo é um ponteiro para um Nodo. Essa variável inicia apontando para NULL. Ao criar o primeiro Nodo, essa variável deve apontar para ele. Cada Nodo, a partir do primeiro, aponta para o Nodo seguinte.Ao apagar um Nodo, o Nodo anterior passa a apontar para o Nodo seguinte ao que foi apagado. Organize o programa em funções separadas para impressão de um nodo, impressão de todos nodos, inclusão e exclusão de um Nodo. 

INICIO -> 2 -> 5 -> NULL

&1  INICIO  &5      .           &1  INICIO  &3      .
&2                  .           &2                  .
&3                  .           &3          {2, &5} .
&4                  .           &4                  .
&5          {5, NULL}           &5          {5, NULL}               */

typedef struct nodo{
int valor;
struct nodo *proximo;
} Nodo;

Nodo* incluir(Nodo*);
Nodo* excluir(Nodo*);
void imprimir(Nodo*);
void main();

Nodo* incluir(Nodo* inicio){
    Nodo *novo = (Nodo*) malloc(sizeof(Nodo));
    printf("\nInforme o valor do nodo: ");
    scanf("%d", &novo->valor);
    novo->proximo = inicio;
    return novo;
}

Nodo* excluir(Nodo* inicio){
    if(inicio == NULL){
        printf("\n>> Lista Vazia!");
        return inicio;
    } 
    
    int v;
    printf("\nInforme o valor a ser apagado: ");
    scanf("%d", &v);

    if(inicio->valor == v){
        Nodo *aSerApagado = inicio;
        inicio = inicio->proximo;
        free(aSerApagado);
        aSerApagado = NULL;
    } else{
        Nodo *atual = inicio;
        while(atual->proximo != NULL && atual->proximo->valor != v)
            inicio = inicio->proximo;
        if(atual->proximo != NULL){
            Nodo *aSerApagado = atual->proximo;
            atual->proximo = atual->proximo->proximo;
            free(aSerApagado);
            aSerApagado = NULL;
        }
    }
    return inicio;
}

void imprimir(Nodo* inicio){
    Nodo *atual = inicio;
    printf("\n");
    while(atual!=NULL){
        printf("{%d} -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL");
}

void main(){
    int op;
    Nodo *inicio;

    printf("\n| Sair         0 |");
    printf("\n| Incluir      1 |");
    printf("\n| Apagar       2 |");
    printf("\n| Imprimir     3 |");
    scanf("%d", &op);

    switch (op){
    case 0:
    break;

    case 1:
        inicio = incluir(inicio);
    break;

    case 2:
        inicio = excluir(inicio);
    break;

    case 3:
        imprimir(inicio);
    break;

    default:
        printf("\n>> Opção inválida");
    break;
    }
}