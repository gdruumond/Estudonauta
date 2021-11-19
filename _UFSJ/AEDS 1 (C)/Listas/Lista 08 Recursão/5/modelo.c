#include<stdio.h>

typedef struct{
    char nome[20];
    float valor;
} produto;

float somaProdutos(produto produto[], int tamanho){
    if(tamanho == 0) return 0;
    return produto[tamanho-1].valor + somaProdutos(produto, tamanho-1);
}

produto maisBarato(produto produto[], int tamanho, int indiceMaisBarato){
    if(tamanho == 0) return produto[indiceMaisBarato];
    if(produto[tamanho-1].valor < produto[indiceMaisBarato].valor) indiceMaisBarato = tamanho - 1;
    return maisBarato(produto, tamanho-1, indiceMaisBarato);
}

void imprimeUmProduto(produto produto){
    printf("\nNome do produto: %s\nPreco do produto: %.2f", produto.nome, produto.valor);
}

void imprimeProdutos(produto produto[], int tamanho){
    if(tamanho == 0) return;
    imprimeUmProduto(produto[tamanho-1]);
    imprimeProdutos(produto, tamanho-1);
}

void main(){
    produto produto[10];
    int tamanho = 0, opc;

    do{
        printf("\n\n>>PRODUTOS<<\n1 CADASTRAR\n2 IMPRIMIR TODOS\n3 MAIS BARATO\n4 VALOR TOTAL\n0 SAIR\n\nInforme sua opcao: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("Nome do produto: ");
                scanf(" %s", produto[tamanho].nome);
                printf("Valor do produto: ");
                scanf("%f", &produto[tamanho].valor);
                tamanho++;
                break;
            case 2:
                imprimeProdutos(produto, tamanho);
                break;
            case 3:
                imprimeUmProduto(maisBarato(produto, tamanho, tamanho-1));
                break;
            case 4: 
                printf("Valor total: %.2f", somaProdutos(produto, tamanho));
                break;
        }
    } while(opc != 0);
}