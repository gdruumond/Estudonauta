#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 20
#define qtdProdutos 3

typedef struct{
    char nome[TMAX];
    int contador;
    float precoTot;
} Marca;

typedef struct{
    char nome[TMAX];
    char marca[TMAX];
    float preco;
} Produto;

int main(){
    Produto produtos[qtdProdutos] = {};
    Marca marcas[qtdProdutos] = {};
    int qtdMarcas = 0, naoencontrou=1;
    float precoTot = 0;

    for(int i=0; i<qtdProdutos; i++){
        printf("\n>> Produto %d: ", i+1);
        printf("\n\tNome: ");
        scanf(" %s", produtos[i].nome);
        printf("\tMarca: ");
        scanf(" %s", produtos[i].marca);
        printf("\tPreco: ");
        scanf("%f", &produtos[i].preco);
        precoTot += produtos[i].preco;
        naoencontrou = 1;

        if(i==0){
            strcpy(marcas[i].nome, produtos[i].marca);
            qtdMarcas++;
            marcas[i].contador++;
            marcas[i].precoTot += produtos[i].preco;
        } else{

            for(int j = 0; j<qtdMarcas; j++){
                if(strcmp(produtos[i].marca, marcas[j].nome) == 0){
                    marcas[j].contador++;
                    marcas[j].precoTot += produtos[i].preco;
                    naoencontrou = 0;
                }
            }

            if(naoencontrou){
                strcpy(marcas[i].nome, produtos[i].marca);
                qtdMarcas++;
                marcas[i].contador++;
                marcas[i].precoTot += produtos[i].preco;
            }
        }
    }

    printf("\n\n");
    for(int i=0; i<qtdMarcas;i++){
        printf("\nMarca %d\n\tNome: %s \n\tProdutos: %d\n\tMedia preco: %.2f", i+1, marcas[i].nome, marcas[i].contador, (marcas[i].precoTot/marcas[i].contador));
    }
    printf("\n\nMedia total: %.2f\n\n", (precoTot/qtdProdutos));

    return 0;
}