#include<stdio.h>
#include<string.h>
#define qtd_acessorio 2

typedef struct{
    char nome[50];
    float valor;
} acessorio;

typedef struct{
    char nome[50];
    float valor;
    acessorio acessorio[qtd_acessorio];
} carro;


void main(){
    int resp, c, i;
    carro carro;
    float carrototal, todoscarros;

    do{
        // Entrada de valores do carro
        i++;
        carrototal = 0;
        printf("Nome do carro %d: ", i);
        scanf(" %s", carro.nome);
        printf("Valor do carro %d: ", i);
        scanf("%f", &carro.valor);
        carrototal += carro.valor;
        todoscarros += carro.valor;

        // Valores dos acessorios
        for(c=0; c<qtd_acessorio; c++){
            printf("Nome do acessorio %d: ", c+1);
            scanf(" %s", carro.acessorio[c].nome);
            printf("Valor do acessorio %d: ", c+1);
            scanf("%f", &carro.acessorio[c].valor);
            carrototal += carro.acessorio[c].valor;
            todoscarros += carro.acessorio[c].valor;
        }

        // Saida de valores
        printf("\nNome do carro %d: %s", i, carro.nome);
        printf("\nValor do carro %d: %.2f", i, carro.valor);
        printf("\nAcessorios: ");
        for(c=0; c<qtd_acessorio; c++)
            printf("\n\t%s\t|%.2f", carro.acessorio[c].nome, carro.acessorio[c].valor);
        printf("\n________________________________________");
        printf("\nValor total do carro %d: %.2f", i, carrototal);
        printf("\n\nValor total de todos os carros: %.2f", todoscarros);
        printf("\n\nPara cadastro de carros, digite 0: ");
        scanf("%d", &resp);
    }while(resp!=0);
}