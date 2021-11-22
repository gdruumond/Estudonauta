#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[50];
    int valor;
} Carro;

void main(){
    Carro carro[5], *pc[5], caro;

    for(int i=0; i<5; i++){
        pc[i] = &carro[i];
        printf("\n>> Carro %d <<", i+1);
        printf("\nNome: ");
        scanf(" %s", pc[i]->nome);
        printf("Valor: ");
        scanf("%d", &pc[i]->valor);
        if(i==0) 
            caro = *pc[i];        
        else if(pc[i]->valor > caro.valor)
            caro = *pc[i];
    }

    printf("O carro mais caro é: %s\nValor: %d", carro->nome, carro->valor);
}